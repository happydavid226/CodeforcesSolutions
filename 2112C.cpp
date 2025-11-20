#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#define int long long
using namespace std;

void solve(){
	int n;
	cin >> n;
	vector<int> a(n);
	int mx = 0LL;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		mx = max(mx, a[i]);
	}
	//sort(a.begin(), a.end());
	int ans = 0LL;
	for(int k = n - 1; k >= 0; k--){
		for(int j = k - 1; j >= 0; j--){
			int c = a[k];
			int b = a[j];
			int needed = max(mx-b-c, c-b);
			auto it = lower_bound(a.begin(), a.end(), needed+1 );
			int add = it - a.begin();
			int numbers = max(0LL, j - add);
			//if(numbers == 0) break;
			ans += numbers;
		}
	}

	printf("%lld\n", ans);
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int tt; cin >> tt; while(tt--) solve();
	return 0;
}

/* we need a number such that a[j] + a[k]*/