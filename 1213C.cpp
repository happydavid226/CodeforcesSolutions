#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
	int n, m;
	cin >> n >> m;

	int m1 = m % 10;
	vector<int> a(10);

	int sum = 0;
	for(int i = 1; i <= 9; i++){
		a[i-1]  = (m1 * i) % 10;
		sum += a[i-1];
	}

	int n1 = n / m;
	int n2 = n1 / 10;
	int n3 = n1 % 10;

	int ans = (sum * n2);

	for(int i = 0; i < n3; i++){
		ans += a[i];
	}
	cout << ans << '\n';	
	
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int tt; cin >> tt;
	while(tt--) solve();
	return 0;
}