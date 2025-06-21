#include <bits/stdc++.h>
#define int long long
using namespace std;

int ceilUp(int x, int y){
    return (x + y -1 )/y;
}

void solve(){
    int n, k , p; cin >> n >> k >> p;
    k = abs(k);
    int sum = n * p;
    if(k > sum){ cout << -1 << "\n"; return; }
    cout << ceilUp(k ,p) << "\n";
    
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t; while(t--) solve();
    return 0;
}
