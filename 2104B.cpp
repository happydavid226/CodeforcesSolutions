#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> sum(n), ma(n), a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    sum[n-1] = a[n-1];
    ma[0] = a[0];
    for(int i = 1; i < n; i++) ma[i] = max(ma[i-1], a[i]);
    for(int i = n-2; i >=0; i--) sum[i] = sum[i+1] + a[i];
    for(int i = n -1; i >= 0; i--) cout << sum[i] + ma[i] - a[i] << " ";
    cout << "\n";
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t; while(t--) solve();
    return 0;
}

