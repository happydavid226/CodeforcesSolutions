#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> a, b;
vector<pair<int, int>> c;
vector<int> d;


void solve(){
    cin >> n >> m;
    a.resize(n);
    b.resize(m);
    c.resize(n);
    d.resize(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < m; i++){
        cin >> b[i];
    }

    if(n <= 2){
        cout << "Yes\n";
        return;
    }

    c[0].first = a[0];
    c[0].second = b[0] - a[0];
    d[0] = min(c[0].first, c[0].second);
    for(int i = 1; i < n; i++){
        c[i].first = a[i];
        c[i].second = b[0] - a[i];

        if(min(c[i].first, c[i].second) >= d[i-1]){
            d[i] = min(c[i].first, c[i].second);
        } else if(max(c[i].first, c[i].second) >= d[i-1]){
            d[i] = max(c[i].first, c[i].second);
        } else {
            cout << "No\n";
            return;
        }
    }


    cout << "Yes\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt; cin >> tt;
    while(tt--) solve();
    return 0;
}