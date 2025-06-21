#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> A(n), B(n), ma(n), mi(n);
    for(int i = 0; i < n; i++) cin >> A[i];
    for(int i = 0; i < n; i++) cin >> B[i];
    for(int i = 0; i < n; i++) ma[i] = max(A[i], B[i]), mi[i] = min(A[i], B[i]);
    int ans = accumulate(ma.begin(), ma.end(), 0LL);
    sort(mi.rbegin(), mi.rend());
    
    for(int i = 0; i < k - 1; i++){
	ans += mi[i];
    }
    cout << ++ans << "\n";
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(nullptr);
    int t; cin >> t; while(t--) solve(); return 0;
}