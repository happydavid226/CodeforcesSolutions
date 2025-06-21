#include <bits/stdc++.h>
#define int long long
using namespace std;

const int mod = 998244353;

int n;
vector<int> p, q, powers;

void solve(){
    cin >> n;
    p.resize(n);
    q.resize(n);
    powers.resize(n + 1); // for 2^n at most

    for(int i = 0; i < n; i++) cin >> p[i];
    for(int i = 0; i < n; i++) cin >> q[i];

    // Precompute powers of 2 mod mod
    powers[0] = 1;
    for(int i = 1; i <= n; i++){
        powers[i] = (powers[i - 1] * 2) % mod;
    }

    // Build prefix max of powers[q[i]]
    vector<int> prefixMax(n);
    prefixMax[0] = powers[q[0]];
    for(int i = 1; i < n; i++){
        prefixMax[i] = max(prefixMax[i - 1], powers[q[i]]);
    }

    // Calculate r[i]
    for(int i = 0; i < n; i++){
        int result = (powers[p[i]] + prefixMax[i]) % mod;
        cout << result << " ";
    }
    cout << "\n";
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt; cin >> tt;
    while(tt--) solve();
    return 0;
}
