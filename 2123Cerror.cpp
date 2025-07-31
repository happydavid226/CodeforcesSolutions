#include <bits/stdc++.h>
using namespace std;

int n, i, max_index, min_index, ma, mi;
vector<int> a;


void solve(){
	cin >> n;
	a.resize(n);

	for(i = 0; i < n; i++){
		cin >> a[i];
		if(i == 0){
			max_index = i;
			min_index = i;
			ma = a[i];
			mi = a[i];
		} else {
			if(a[i] > ma){
				max_index = i;
				ma = a[i];
			} else {
				min_index = i;
				mi = a[i];
			}
		}
	}

	for(i = 0; i < n; i++){
		if(i > min_index && i > max_index){
			cout << '0';
		} else {
			cout << '1';
		}
	}

	
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int tt; cin >> tt;
	while(tt--) solve();
	return 0;
}