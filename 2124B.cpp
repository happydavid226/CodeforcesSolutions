#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n; cin >> n;
	vector<int> a(n);

	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	cout << min(a[0] * 2, a[0] + a[1]) << '\n';
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int tt; cin >> tt; while(tt--) solve();
	return 0;
}
