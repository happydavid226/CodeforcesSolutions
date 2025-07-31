#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n, mi;
	cin >> n;
	vector<int> a(n);

	for(int i = 0; i < n; i++){
		cin >> a[i];
		if(i == 0) mi = a[i];
		else mi = min(mi, a[i]);
	}

	int diff = a[0] - a[1];
	for(int i = 1; i < n - 1; i++){
		if(a[i] - a[i+1] != diff){
			cout << "NO\n";
			return;
		}
	}

	if(abs(diff) > mi){
		cout << "NO\n";
		return;
	}
	cout << "YES\n";
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int tt; cin >> tt; while(tt--) solve(); return 0;
	return 0;
}