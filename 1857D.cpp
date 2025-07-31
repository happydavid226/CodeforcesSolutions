#include <bits/stdc++.h>
#define int long long
using namespace std;

bool comp(pair<int,int> a, pair<int, int> b){
	if(a.first == b.first) return a.second < b.second;
	return a.first > b.first;
}

void solve(){
	int n;
	cin >> n;
	
	vector<int> a(n), b(n);
	vector<pair<int,int>> C(n);
	vector<int> R;	
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int  i = 0; i < n; i++) cin >> b[i];

	for(int i = 0; i < n; i++){
		C[i].first = a[i] - b[i];
		C[i].second = i + 1;
	}
	sort(C.begin(), C.end(), comp);
	
	/* for(int i = 0; i < n; i++) cout << C[i].first << ' '; cout << '\n';
	for(int i = 0; i < n; i++) cout << C[i].second << ' '; cout << '\n'; */

	int ma = C[0].first;
	
	int count = 0;
	for(int i = 0; i < n; i++){
		if(C[i].first == ma){
			count++;
		}
	}
	cout << count << '\n';
	
	for(int i = 0; i < count; i++){
		cout << C[i].second << ' ';
	}
	cout << '\n';
}

signed main(){

	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int tt; cin >> tt; while(tt--) solve();
	return 0;
}