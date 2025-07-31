#include <bits/stdc++.h>
using namespace std;

void solve(){
	bool flag = false;
	int n; 
	cin >> n;
	vector<int>a(n);
	map<int,int> mp;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		mp[a[i]]++;
	}
	if(n == 1){
		cout << 1 << ' ' << 1 << '\n';
		return;
	}
	int candidate_ans, ans, l, r, ansl, ansr;
	candidate_ans = ans = l = r = ansl = ansr = 0;
	for(int i = 0; i <n-1; i++){
		if(mp[a[i]] == 1 && mp[a[i+1]] == 1){
			flag = true;
			r++;
			if(r - l > ansr - ansl){
				ansl = l;
				ansr = r;
			}
		} else {
			l = r = i + 1;
		}
	}
	if(!flag){
		for(int i = 0; i < n; i++){
			if(mp[a[i]] == 1){
				cout << (i+1) << ' ' << (i+1) << '\n';
				return;
			}
		}
		cout << 0 << '\n';
		return;
	}
	cout << (ansl+1) << ' ' << (ansr+1) << '\n';
	
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int tt; cin >> tt; while(tt--) solve();
	return 0;
}