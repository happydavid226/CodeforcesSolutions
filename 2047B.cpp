#include <bits/stdc++.h>
#define  int long long
using namespace std;

void solve(){
    string s; cin >>s;
    map<char, int> nf;
    for(int i= 0; i < s.size(); i++) nf[s[i]]++;
    char min_char;
    char max_char;
    int mi, ma; mi = ma = 0;
    for(auto x : nf){
	if(x.second > ma){ ma = x.second; min_char = x.first; }
        if(x.second < )
    }
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie()
    int t; cin >> t;
    while(t--) solve();
    return 0;
}