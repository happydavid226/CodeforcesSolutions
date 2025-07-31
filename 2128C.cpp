#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int n;
    cin >> n;

    bool flag = true;
    vector<int> a(n);
    int mi;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(i == 0){
            mi = a[i];
        } else {
            if(a[i] >= mi * 2){
                flag = false;
            }
            mi = min(mi, a[i]);
        }
    }
    if(flag) cout << "yes\n";
    else cout << "no\n";
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt; cin >> tt; while(tt--) solve();
    return 0;
}