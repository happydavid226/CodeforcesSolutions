#include <bits/stdc++.h>
using namespace std;

void createBadString(string &s, int n){
    while(n--){
	s += '0';
    }
}

void createGoodString(string &s, int n){
    while(n--){
	s += '1';
    }
}

void solve(){
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(m);
    set<int> q;
    for(int i = 0; i < m;  i++) cin >> a[i];
    for(int i = 0; i < k; i++) {int num; cin >> num; q.insert(num); }
    string ans = "";
    if(n == k) { createGoodString(ans, m); cout << ans << "\n"; return; }
    if((n - k) > 1){ createBadString(ans, m); cout << ans << "\n"; return; }

    for(int i = 0; i < m; i++){
	if(q.count(a[i])) ans += '0';
        else ans += '1';
    }
    cout << ans << "\n";
}

int main(){
    int t; cin >> t; while(t--) solve();
    return 0;
    
}