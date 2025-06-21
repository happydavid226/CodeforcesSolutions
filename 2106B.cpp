#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k; cin >> n >> k;
    for(int i = 0; i < n; i++){
	if(i != k) cout << i << " ";
    }
    if(k < n)
    cout << k << "\n";
    else cout << "\n";
}

int main(){
    int t; cin >> t; while(t--) solve(); return 0;
}