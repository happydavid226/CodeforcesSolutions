#include <bits/stdc++.h>
#define int long long
using namespace std;
vector<int> f(200000);
int a, b, c;



void solve(){
	int n, m;
	cin >> n >> m;
	int fn_1 = f[n-1];
	int fn_2 = f[n-2];
	int sum = fn_1 + fn_2;

	string ans;
	for(int i = 0; i < m ; i++){
		cin >> a >> b >> c;
		if(a >= fn_1 && b >= fn_1 && c >= fn_1 && (a >= sum || b >= sum || c >= sum)){
			ans += '1';
		} else {
			ans += '0';
		}	
	}
	cout << ans << '\n';
};

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	
	f[0] = 1;
	f[1] = 2;
	for(int i = 2; i < 200000; i++){
		f[i] = f[i-1] + f[i-2];
	}

	
	int tt; cin >> tt;
	while(tt--) solve();
	return 0;
}