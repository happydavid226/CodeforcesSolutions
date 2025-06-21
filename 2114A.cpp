#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt; cin >> tt;
    while(tt--){
        int n; cin >> n;
        int s = sqrt(n);
        if(s * s == n){
            cout << s/2 << " " << s - s/2 << "\n";
        } else {
            cout << -1 << "\n";
        }
    }
    return 0;
}