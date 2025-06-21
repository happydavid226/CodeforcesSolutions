#include <bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 998244353;

int n, i,j, ma, base;
vector<int> p, q, powers;


void solve(){
    cin >> n;
    p.resize(n);
    q.resize(n);
    powers.resize(n);

    for(i = 0; i < n; i++){
        cin >> p[i];
    }
    for(i = 0; i < n; i++){
        cin >> q[i];
    }
    base = 1;
    for(i = 0; i < n; i++){
        powers[i] = base;
        base = (base * 2) % mod;
    }

    
    for(i = 0; i < n; i++){
        ma = 0;
        for(j = 0; j <= i; j++){
            ma = max(ma, powers[p[j]] + powers[q[i-j]]);
        }
        cout << ma << " ";
    }
    cout << "\n";

}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt; cin >> tt; while(tt--) solve();
    return 0;
}