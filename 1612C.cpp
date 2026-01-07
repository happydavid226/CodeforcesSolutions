#include <bits/stdc++.h>
using ll = long long;
using namespace std;

ll f(ll m, ll k){
    if(m <= k) return m*(m+1)/2;
    ll ans = k*(k+1)/2;
    m -= k;
    return ans + ((k*(k-1)/2) - ((k-m-1)*(k-m)/2));
}

int main(){
    int tt; cin >> tt;
    for(int  t= 1; t <= tt; t++){
        ll k,x; cin >> k >> x;
        ll l = 1, r = (2*k)-1;
        if(f(r ,k) <= x){ cout << 2*k-1 << '\n'; continue; }
        while(l < r){
            ll mid = l + (r-l)/2;
            if(f(mid,k) < x) l = mid + 1;
            else r = mid;
        }
        cout << r << '\n';
    }
    return 0;
}