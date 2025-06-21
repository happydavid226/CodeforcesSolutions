#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; string s; cin >> n >> s;
    int ans = 0;
    int count1 = 0;
    for(int i = 0; i < n; i++){
	if(s[i] == '1') count1++;
    }
    for(int i = 0; i < n; i++){
	if(s[i] == '0') ans += count1 + 1;
        else ans += count1 - 1;                
    }
    cout << ans << "\n";
}

int main(){
    int t; cin >> t; while(t--) solve(); return 0;
}