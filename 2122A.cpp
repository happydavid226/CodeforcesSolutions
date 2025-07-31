#include <bits/stdc++.h>
using namespace std;

void solve(){
    int r, c;
    cin >> r >> c;

    if(r == 1 || c == 1){
        cout << "No\n";
        return;
    }

    if(r <= 2 && c <= 2){
        cout << "NO\n";
    } else {
        cout << "Yes\n";
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt; cin >> tt; while(tt--) solve();
    return 0;
}