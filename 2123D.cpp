#include <bits/stdc++.h>
using namespace std;

int n, k, i, cnt_zero, cnt_one;
string s;

void solve(){
	cin >> n >> k >> s;
	cnt_zero = cnt_one = 0;

	for(i = 0; i < n; i++){
		if(s[i] == '0') cnt_zero++;
		else cnt_one++;
	}
	if(k * 2 > n || k >= cnt_one){
		cout << "Alice\n";
	} else {
		cout << "Bob\n";
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int tt; cin >> tt; while(tt--) solve();
	return 0;
}