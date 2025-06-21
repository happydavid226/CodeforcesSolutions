#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int a, b, c; cin >> a >> b >> c;
    if((a+b+c) % 3 == 0 && b <= (a+b+c)/3) cout << "yes\n";
    else cout << "no\n";
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >>t; while(t--) solve();
    return 0;
}