#include <bits/stdc++.h>
#define int long long
using namespace std;

int gcd(int a, int b){
	if(b == 0) return a;
	return gcd(b, a % b);
}

int lcm(int a, int b){
	return (a / gcd(a, b) * b);
}


void solve(){
	int n;
	cin >> n;
	vector<int>b(n);

	vector<int> v;
	int l = 1;
	//set<int> st;

	for(int i = 0; i < n; i++){
		cin >> b[i];
		
		if(i != 0 && (b[i] % b[i-1] != 0)){
			//st.insert(b[i-1] / gcd(b[i-1], b[i]));
			v.push_back(b[i-1] / gcd(b[i-1], b[i]));
		}
		
	}
	
	int ans = 1;
	//for(auto x : st) ans *= x;
	//cout << ans << '\n';
	for(int i = 0; i < v.size(); i++){
		l = lcm(l, v[i]);
	}
	cout << l << '\n';
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int tt; cin >> tt; 
	while(tt--) solve();

	return 0;
}