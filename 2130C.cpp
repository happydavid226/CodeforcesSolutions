#include <bits/stdc++.h>
using namespace std;


void solve(){
	int n;
	cin>> n;

	vector<pair<int,int>> a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i].first >> a[i].second;
	}
	vector<bool>visited(n, false);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(i != j){
				if(a[j].first >= a[i].first && a[j].second <= a[i].second ){
					visited[j] = true;
                    
				}
			}
		}
	}
    vector<int> ans;
	for(int i = 0; i < n; i++){
		if(!visited[i]){
			ans.push_back(i+1);
		}
	}
    cout << ans.size() << '\n';
    for(const auto& x : ans){
        cout << x << ' ';
    }
    cout << '\n';
}

int main(){
	//ios_base::sync_with_stdio(false);
	//cin.tie(nullptr);
    

	int tt; cin >> tt; while(tt--) solve();
	return 0;
}