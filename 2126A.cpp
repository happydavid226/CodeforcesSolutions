#include <bits/stdc++.h>
using namespace std;

void solve(){
    int x; cin >> x;
    int ans = 2000;
    while(x > 0){
        ans = min(ans , x % 10);
        x /= 10;
    }
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt; cin >> tt; while(tt--) solve();
    return 0;
}