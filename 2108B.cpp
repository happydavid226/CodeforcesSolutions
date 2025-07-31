#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, x;
    cin >> n >> x;

    if(n % 2 == 0){
        if(x == 0){
            cout << n << '\n';
            return;
        }
        if(x == 1){
            cout << min((2 * n + 1), (3 * n - 1)) << '\n';
            return;
        }
        if(x & 1){
            cout << (n + x - 2) << '\n';
            return;
        }
        cout << (n + x) << '\n';
        return;
    }

    if(x == 0){
        cout << -1 << '\n';
        return;
    }
    if(x == 1){
        cout << n << '\n';
        return;
    }
    if(x & 1){
        cout << (n + x - 2) << '\n';
        return;
    }
    cout << (x + n - 1) << '\n';
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt; cin >> tt; while(tt--) solve();
    return 0;
}