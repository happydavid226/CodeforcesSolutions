#include <bits/stdc++.h>
#define int long long
using namespace std;

int gcd (int a, int b){
    if(b == 0) return a;
    return gcd(b, a % b);
}

void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    int g =0;
    
    for(int i = 1; i < n; i++){
	if(a[i] % a[0] == 0){
	    g = gcd(g, a[i]);
        }
    }
    if(g == a[0]) cout << "yes\n";
    else cout << "no\n";
    
}


int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int t; cin >> t; while(t--) solve();
    return 0;
}