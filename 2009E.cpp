#include <bits/stdc++.h>
#define int long long
using namespace std;

int f(int a, int b){
    return (b - a + 1) * (a + b) /2;
}

void solve(){
    int n, k;
    cin >> n >> k;

    int l = k, r = k + n - 1;
    int m1 = n - 1;
    while(l <= r){
        int m = (l + r) / 2;
        if(f(1, m) == f(m + 1, r)){
            cout << 0 << '\n';
            return;
        }
        if(f(1, m) < f(m + 1 , r)){
            l = m + 1;
        } else {
            r = m - 1;
        }
    }
    cout << min(f(1, r), f(l, m1)) << '\n';
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt; cin >> tt; while(tt--) solve();
    return 0;
}