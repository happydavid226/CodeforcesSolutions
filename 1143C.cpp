#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;

	vector<vector<int>> adj(n, vector<int>(0));
	vector<int> P(n), C(n), R(0);
	for(int i = 0; i <n; i++){
		cin >> P[i] >> C[i];
		P[i]--;
		if(P[i] >= 0){
			adj[P[i]].push_back(i);
		}
	}
	int ans = 0;
	for(int i = 0; i < n; i++){
		if(C[i] == 0 || P[i] == -2) continue;
		bool flag = true;
		for(int j : adj[i]){
			if(C[j] == 0){
				flag = false;
			}
		}
		if(!flag) continue;
		R.push_back(i+1);
	}
	if(R.size() == 0){ cout << -1 << '\n'; return 0; }
	sort(R.begin(), R.end());
	for(auto& x : R) cout << x  << " ";
	cout << '\n'; 
	return 0;
}