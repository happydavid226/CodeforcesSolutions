#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        ll x, m; cin >> x >> m;
        ll ans = 0LL;
        for(ll i = 1; i <= m; i++){
            if(i != x && ((i%(x^i) == 0) || x%(x^i) == 0)) ans++;
        }
        cout << ans << '\n';
    }
    return 0;
}