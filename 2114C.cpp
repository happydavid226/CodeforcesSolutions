#include <bits/stdc++.h>
using namespace std;



void solve(){
	int n, i, m, current_number, ans;
	vector<int> a;

	cin >> n;
	a.resize(n);

	


	for(i = 0; i < n; i++){
		cin >> a[i];
	}

	ans = 1;
	current_number = a[0];


	for(i = 1; i < n; i++){
		if(abs(current_number - a[i]) < 2){
			continue;
		}
		ans++;
		current_number = a[i];
                
	}
	cout << ans << '\n';
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int tt; cin >> tt; while(tt--) solve();
	return 0;
}