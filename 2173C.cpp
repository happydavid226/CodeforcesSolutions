#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        ll n, k, data; cin >> n >> k;
        set<ll> a, b, done;
        for(int i = 0; i < n; i++) cin >> data, a.insert(data);
        bool flag1 = true; 
        for(const ll& x : a){
            bool flag = true;
            if(done.count(x)) continue; 
            for(ll p = 1; x*p <= k; p++){
                if(!a.count(x*p)) {flag = false; break; }
                done.insert(x*p);
            }
            if(!flag) { flag1=false; break; }
            b.insert(x);
        }
        if(!flag1) { cout << -1 << '\n'; continue;}
        cout << b.size() << '\n';
        for(const ll& x : b) cout << x <<' ';
        cout << '\n';
    }
    return 0;
}