#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    if(n <= 4){cout << -1 << "\n"; return; }
    for(int i = 2; i <=n; i += 2){
	if(i != 4){ cout << i << " "; }
    }
    cout << 4 << " " << 5 << " ";
    for(int i = 1; i <= n; i += 2){
	if(i != 5) { cout << i << " "; }
    }
    cout << "\n"; 
}

int main(){
    int t; cin >> t;
    while(t--) solve();
    return 0;
}