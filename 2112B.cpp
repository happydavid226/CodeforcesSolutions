#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> a;

bool is_beautiful(){
	int m = a.size();
	for(int i = 0; i < n-1; i++){
		if(abs(a[i] - a[i+1]) <= 1){
			return true;
		}
	}
	return false;
}

int check_left(int stop, int low, int high){
	int m = a.size();
	int ans = -1;
	for(int i = 0; i < stop; i++ ){
		if(a[i] <= max(low, high) && a[i] >= min(low, high)){
			ans = i;
		}
	}
	return ans;
}

int check_right(int stop, int low, int high){
	int m = a.size();
	for(int i = stop + 1; i < m; i++){
		if(a[i] <= max(low, high) && a[i] >= min(low, high)){
			return i;
		}
	}
	return -1;
}

void solve(){
	cin >> n;
	a.resize(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	if(is_beautiful()){
		cout << 0 << '\n';
		return;
	}
	int ans = 1002;
	
	for(int i = 0; i < n-1; i++){
		int low = a[i], high = a[i+1];

		int ans_left = check_left(i, a[i], a[i+1]);
		

		int ans_right = check_right(i+1, a[i], a[i+1]);
		int candidate_ans;

		if(ans_right != -1 && ans_left != -1){
			candidate_ans = min(i - ans_left, ans_right - i - 1);
		} else if (ans_right == -1 && ans_left != -1){
			candidate_ans = i - ans_left;
		} else if(ans_left == -1 && ans_right != -1){
			candidate_ans = ans_right - i - 1;
		} else {
			candidate_ans = 1002;
		}
		ans = min(candidate_ans, ans);
	}
	if(ans == 1002){
		cout << -1 << '\n';
	} else {
		cout << ans << '\n';
	}
	
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int tt; cin >> tt;
	while(tt--) solve();
	return 0;
}