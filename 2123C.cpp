#include <bits/stdc++.h>
using namespace std;

int n, i, mi, ma;
vector<int> a, p, m;

void solve (){
	cin >> n;
	a.resize(n);
	p.resize(n);
	m.resize(n);

	for(i = 0; i < n; i++){
		cin >> a[i];
		if(i == 0){
			p[i] = a[i];
			mi = a[i];
		} else {
			if(a[i] < mi){
				mi = a[i];
			}
			p[i] = mi;
		}
	}
	ma = a[n-1];
	m[n-1] = ma;
	for(i = n - 2; i >= 0; i--){
		if(a[i] > ma) ma = a[i];
		m[i] = ma;
	}
	
	for(i = 0; i < n; i++){
		if(a[i] == p[i] || a[i] == m[i]){
			cout << '1';
		} else {
			cout << '0';
		}
	}
	cout << '\n';

}

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int tt; cin >> tt; while(tt--) solve();
	return 0;
}