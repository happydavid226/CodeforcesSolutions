#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll ceilUp(ll x, ll y){
    return (x+(y-1))/y;
}

int main(){
    ll n, m,a ;
    cin >> n >> m >> a;
    cout << (ceilUp(n, a) * ceilUp(m, a)) << "\n";
    return 0;
}
