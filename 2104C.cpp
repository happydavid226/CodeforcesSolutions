#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    vector<int> a, b;
    for(int i = 0; i < n; i++){
	if(s[i] == 'A') a.push_back(i+1);
        else b.push_back(i+1);
    }
    
    bool flagout = false, flagin = false;
    for(auto x : a){
        flagout = true;
	for(auto y : b){
            if(y == 1 && x == n){flagout = false; break; }
	    if(y > x && (y != n || x != 1)){flagout = false; break; }
        }
        if(flagout){ cout << "Alice\n"; return; }
    }
    cout << "Bob\n";
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt; cin >> tt;
    while(tt--) solve();
    return 0;
}