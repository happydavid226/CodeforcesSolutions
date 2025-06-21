#include <bits/stdc++.h>
using namespace std;

int n;

vector<int> a;

void solve(){
    cin >> n;
    a.resize(n);

    for(int i =0; i < n; i++){
        cin >> a[i];
    }

    set<int> s, s1;
    s.insert(a[0]);

    int i = 0;
    int ans = 0;
    while(i < n){
        while(i < n && !s.empty()){
            if(s.count(a[i])){
                s.erase(a[i]);
            }
            s1.insert(a[i]);
            i++;
        }
        if(s.empty()){
            ans++;

        }
        for(auto x : s1){
            s.insert(x);
        }
        s1.clear();
    }
    cout << ans << "\n";
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