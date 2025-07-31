#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n  , m;
	cin >> n >> m;
	vector<vector<int>> a(n, vector<int> (m));
	int ma;
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> a[i][j];
			if(i == 0 && j == 0){
				ma = a[i][j];
			}  else {
				if(a[i][j] > ma) ma = a[i][j];
			}
		}
	}
	
	vector<pair<int, int>> rc;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(a[i][j] == ma){
				rc.push_back({i, j});
			}
		}
	}
	if(rc.size() <= 2){
		cout << ma - 1 << '\n';
		return;
	}

	pair<int, int> f;
	f.first = rc[0].first;
	f.second = rc[0].second;

	int s = rc.size();
	vector<bool> visited(s, false);
	visited[0] = true;
	bool flag_row = false, flag_column = false;

	for(int i = 1; i < s; i++){
		if(f.first == rc[i].first){
			flag_row = true;
			visited[i] = true;
			for(int j = i+1; j < s; j++){
				if(f.first == rc[j].first){
					visited[j] = true;
				}
			}
		}
		if(flag_row) break;

		if(f.second == rc[i].second){
			flag_column = true;
			visited[i] = true;
			for(int j = i + 1; j < s; j++){
				if(f.second == rc[j].second){
					visited[j] = true;
				}
			}
		}
		if(flag_column) break;
	}
	
	if(flag_row){
		int start = -1;
		for(int i = 0;  i < s; i++){
			if(!visited[i]){
				start = i;
				break;
			}
		}

		if(start != -1){
			visited[start] = true;
			for(int i = start + 1; i < s; i++){
				if(rc[i].second == rc[start].second){
					visited[i] = true;
				}
			}
		} else { cout << ma - 1 << '\n'; return; }
	}
	if(flag_column){
		int start = -1;
		for(int i = 0; i < s; i++){
			if(!visited[i]){
				start = i;
				break;
			}
		}
		if(start != -1){
			visited[start] = true;
			for(int i = start + 1; i < s; i++){
				if(rc[i].first == rc[start].first){
					visited[i] = true;
				}
			}
		} else { cout << ma - 1 << '\n'; return; }
	}
	set<int> str, stc;
	if(!flag_row && !flag_column){
		for(int i = 1; i < s; i++){
			str.insert(rc[i].first);
			stc.insert(rc[i].second);
		}
		if(str.size() == 1 || stc.size() == 1){
			cout << ma - 1 << '\n';
			return;
		} else {
			cout << ma << '\n';
			return;
		}
	}

	for(int i = 0; i < s; i++){
		if(!visited[i]) {
			cout << ma << '\n';
			return;
		}
	}
	cout << ma - 1 << '\n';
	
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int tt; cin >> tt; while(tt--) solve();
	return 0;
}