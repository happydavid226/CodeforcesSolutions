#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n, k; cin >> n >> k;
    vector<ll> A(n), B(n);
    for(int i = 0; i <n; i++) cin >> A[i]; for(int i = 0; i < n; i++) cin >> B[i];
    ll sum = -1;
    for(int i = 0; i < n; i++){
	if(B[i] != -1) {sum = B[i] + A[i]; break; }
    }
    if(sum == -1){
        ll mi, ma = A[0];
        for(int i = 0; i < n; i++){
	    mi = min(mi, A[i]);
            ma = max(ma, A[i]);
        }
	cout << min(0LL, mi + k - ma + 1) << "\n";
        return;
    }
    ll ans = 0;
    for(int i = 0; i < n; i++){
	if(A[i] > sum){cout << 0 << "\n"; return; }
        if(A[i] + k < sum){cout << 0 << "\n"; return; }
        if(B[i] == -1) ans++;
    }
    cout << ans << "\n";
}

int main(){
    ll t; cin >> t; while(t--) solve(); return 0;
}