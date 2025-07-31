#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int n, c;
    cin >> n >> c;

    vector<int> a(n), b;
    int ans = n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] <= c){
            b.push_back(a[i]);
        }
    }
    int m = b.size();
    sort(b.rbegin(), b.rend());
    vector<bool> visited(m, false);
    for(int i = 0; i < m; i++){
        if(!visited[i]){
            visited[i] = true;
            ans--;
            for(int j = 0; j < m; j++){
                if(!visited[j]){
                    b[j] *= 2;
                    if(b[j] > c){
                        visited[j] = true;
                    }

                }
            }
        }
    }
    cout << ans << '\n';
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt; cin >> tt; while(tt--) solve();
    return 0;
}