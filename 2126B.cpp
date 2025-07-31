#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k; cin >> n >> k;
    vector<int> a(n);
    int zeros = 0;
    int ans = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] == 0){
            zeros++;
            if(zeros == k){
                ans++;
                zeros = -1;
            } 
        } else if(zeros == -1){
            zeros++;
        } else {
            zeros = 0;
        }
        
    }
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt; cin >> tt; while(tt--) solve();
    return 0;
}