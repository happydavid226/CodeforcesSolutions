#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int n; cin >> n;
    if(n & 1){
	cout << "yes\n";
    } else {
	cout << "no\n";
    }
}


int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt; cin >> tt; while(tt--) solve();
    return 0;
}