#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    set<int> s;
    for(int i = 0; i < n; i++){
        int data;
        cin >> data;
        s.insert(data);
    }
    int si = s.size();
    int ans = 10000;
    for(const auto& x : s){
        if(x >= si){
            ans = min(ans, x);
        }
    }
    cout << ans << endl;
}

int main(){
    int tt;
    cin >> tt;
    while(tt--){
        solve();
    }
}