#include <bits/stdc++.h>
using namespace std;


void solve(){
    string s; cin >> s;
    int n = s.size();
    vector<bool> visited(n, false);
    int cb = 0, cB = 0;
    for(int i = n - 1; i >= 0; i--){
	if(s[i] == 'b'){
	    cb++;
            visited[i] = true;
        }
        else if(s[i] == 'B'){
            visited[i] = true;
	    cB++;
        }
        else if(isupper(s[i])&& cB > 0){
	    visited[i] = true;
            if(cB != 0) cB--;
        }
        else if(islower(s[i]) && cb > 0){
	    visited[i] = true;
            if(cb != 0) cb--;
        }
    }
    for(int i = 0; i < n; i++){
	if(!visited[i]) cout << s[i];
    }
    cout << "\n";
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t; while(t--) solve();
    return 0;
}