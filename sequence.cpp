#include <bits/stdc++.h>
using namespace std;

int ceilUp(int n , int x){
	return (n + x - 1) / x;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	vector<int> dp;
	dp.push_back(1);
	dp.push_back(2);

	int i = 1;
	while(dp[i] <= 1000000000){
		dp.push_back(dp[i] + dp[i-1]);
		i++;
	}
	
	
	int q;
	cin >> q;
	
	for(int i = 0; i <  q; i++){
		int x, k;
		cin >> x >> k;

		int l = ceilUp(k , x);
		

		if(l == 1 || l == 2){
			cout << l << '\n';
			continue;
		}
		auto it = lower_bound(dp.begin(), dp.end(), l);
		
		cout << it - dp.begin() + 1<< '\n';
	}
	return 0;
}