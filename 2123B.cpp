#include <bits/stdc++.h>
using namespace std;

int n, j, k, i, key, ma;
vector<int> a;

void solve(){
	cin >> n >> j >> k;
	a.resize(n);

	for(i = 0; i < n; i++){
		cin >> a[i];
	}
	key = a[j-1];

	ma = a[0];
	for(i = 1; i < n; i++){
		if(a[i] > ma) ma = a[i];
	}
	if(key == ma || k > 1){
		cout << "yes\n";
	} else {
		cout << "no\n";
	}
	
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int tt; cin >> tt;
	while(tt--) solve();
	return 0;
}