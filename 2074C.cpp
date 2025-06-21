#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int x;
    cin >> x;
    for(int i = 0; i < 30; i++){
	for(int j = 0; j < 30; j++){
	    int y = (1 << j) | (1 << i);
	    if(y < x && (x ^ y) + y > x && (x ^ y) < x + y && (x ^ y) + x > y){cout << y << "\n"; return; }
	}
    }
    cout << -1 << "\n";
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int t; cin >> t; while(t--) solve();
    return 0;
}