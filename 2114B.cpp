#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k; cin >> n >> k;
    string s; cin >> s;
    int odds, evens; odds = evens = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '0') evens++;
        else odds++;
    }
    if(evens > odds){
        swap(evens, odds);
    }
    if(odds - evens == k * 2){
        cout << "YES\n";
    } else if (k == evens && evens * 2 >= odds && k != 1){
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt; cin >> tt; while(tt--) solve();
    return 0;
}