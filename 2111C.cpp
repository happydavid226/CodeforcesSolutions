#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
	int n;
	cin >> n;
	vector<int> a(n);
	
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}

	vector<pair<int,int>> p;

	int val = a[0], l = 0, r = 0;
	for(int i = 1; i < n; i++){
		if(a[i] == val){
			r++;
		} else {
			p.push_back({l,r});
			l = i;
			val = a[i];
			r = i;
		}
	}
	p.push_back({l, r});
	int ans = 9223372036854775807;
	
	int candidate_ans = 9223372036854775807;
	for(int i = 0; i < p.size(); i++){
		candidate_ans = (a[p[i].first] * p[i].first) + (a[p[i].second] * (n- p[i].second - 1));
		ans = min(ans, candidate_ans);
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