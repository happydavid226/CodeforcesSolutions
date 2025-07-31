#include <bits/stdc++.h>
using namespace std;

int ceilUp(int n, int x){
    if(x == 0) return 0;
    return (n + x - 1) / x;
}

void solve(){
    int a, b, c;
    cin >> a >> b >> c;
    
    int to_x = ceilUp(a, c);
    int to_y = ceilUp(b, c);

    int ans = max(to_x, to_y) * 2;

    if(to_x > to_y) ans--;
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt; cin >> tt; while(tt--) solve();
    return 0;
}