#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n; cin >> n;
	vector<int> a(n);

	bool flag = false;
	int ans1 = -1, ans2 = -1;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		if(i != 0 && a[i-1] > a[i]){
			flag = true;
			ans1 = a[i-1];
			ans2 = a[i];
		}
	}
	if(flag){
		cout << "yes\n";
		cout << 2 << '\n';
		cout << ans1 << ' ' << ans2 << '\n';
	} else {
		cout << "no\n";
	}	
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int tt; cin >> tt; while(tt--) solve();
	return 0;
}