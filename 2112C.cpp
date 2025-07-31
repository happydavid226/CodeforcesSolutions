#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n; 
	cin >> n;
	
	vector<int>a(n);
	int ma = 0;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		ma = max(ma, a[i]);
	}

	int ans = 0; 

	for(int i = 0; i < n; i++){
		for(int j = i+1; j < n; j++){
			for(int k = j + 1; k < n; k++){
				if(a[k] < (a[i] + a[j]) && (a[i] + a[j] + a[k] > ma)){
					ans++;
				}
			}
		}
	}
	cout << ans << '\n';
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int tt; cin >> tt; while(tt--) solve();
	return 0;
}