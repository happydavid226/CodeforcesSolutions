#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        ll x, m; cin >> x >> m;
        int bits_of_x = 64 - __builtin_clzll(x);
        int bits_of_m = 64 - __builtin_clzll(m);
        ll end = -1;
        if(bits_of_x == bits_of_m)  end = m;
        else end = min((1LL<<(64 - __builtin_clzll(x)+1))-1,m);
        ll ans = 0LL;
        for(ll y = 1; y <= end; y++){
            if(y != x && (y%(x^y) == 0 || x%(x^y) == 0)) ans++;
        }
        cout << ans << '\n';
    }
    return 0;
}