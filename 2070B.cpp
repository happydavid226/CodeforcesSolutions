#include <bits/stdc++.h>
#define int long long
using namespace std;

int n, x, x1, k, i , flag, diff;
string s;


int find_count(string s){
    int count = 0;
    int ans = 0;
    for(int i = 0; i < s.size(); i++){
	if(s[i] == 'L') count--;
        else count++;
        ans++;
        if(count == 0) return ans;
    }
    return -1;
}

void solve(){
    flag = 0;
    cin >> n >> x >> k;
    cin >> s;
    x1 = x;
    for(i = 0; i < n; i++) {
	if(s[i] == 'L') x--;
        else x++;
        k--;
        if(x == 0 && k == 0){
	    cout << 1 << "\n";
            return;
        }
        if(x == 0){
            flag = 1;
	    break;
	}
        if(k == 0){
	    cout << 0 << "\n";
	    return;
        }
    }

    //int ans = 0;
    if(x == 0 ){
        int y = find_count(s);
        if(y == -1) { cout << 1 << "\n"; return; }
    	cout << max(0LL, k/y) + flag << "\n";
        return;
    }
    cout << 0 << "\n"; 
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt; cin >> tt; while(tt--) solve();
    return 0;
}