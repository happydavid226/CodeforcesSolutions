#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;

    cout << 1 << " ";

    for(int i = n; i >= 2; i--){
        cout << i << " ";
    }

    cout << "\n";

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt; cin >> tt;
    while(tt--){
        solve();
    }
    return 0;
}