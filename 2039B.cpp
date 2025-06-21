#include <bits/stdc++.h>
using namespace std;

void solve(){
    string a; cin >> a;
    int n = a.size();
    if(n == 1) { cout << -1 << "\n"; return; }
    for(int i = 0; i < n-1; i++){
	if(a[i] == a[i+1]) { cout << a[i] << a[i+1] << "\n"; return; }
    } 
    for(int i = 0; i < n-2; i++){
	if(a[i] != a[i+1] && a[i+1] != a[i+2] and a[i] != a[i+2]){
	    cout << a[i] << a[i+1] << a[i+2] << "\n"; return;
	}
    }
    cout << -1 << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}