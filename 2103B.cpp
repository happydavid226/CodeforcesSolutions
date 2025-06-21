#include <bits/stdc++.h>
#define int long long
using namespace std;

string s; int ans;

void solve(){
    int n; cin >> n ;
    cin >> s;
    ans = 0;
    bool inversion1 = false, inversion2 = false;
    if(s[0] == '1') ans+= 2;
    else ans++;
    for(int i = 1; i < n; i++){
	if(s[i] != s[i-1]) ans+=2;
        else ans++;
        if(s[i-1] == '1' && s[i] == '0'){
	    inversion1 = true;
        }
        if(s[i-1] == '0' && s[i] == '1'){
	    inversion2 = inversion1;
        }
    }
    if(inversion2 && inversion1){ ans -= 2; }
    else if(inversion1){ans -= 1; }
    cout << ans << "\n";
}


int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int tt; cin >> tt; while(tt--) solve();
    return 0;
}