#include <iostream>
#include <vector>
#include <cstdint>
#define int long long
#define pii pair<int,int>
#define vi vector<int>
#define vb vector<bool> 
#define ll long long
#define ull unsigned long long
#define rep(i, a, n) for(int i = (a); i < (n); i++)
#define rop(i, n , a) for(int i = (n); i >= (a); i--)
using namespace std;

void solve(){
    int n, k, x, i, l, r, m, su, ca,s, s1 ;
    cin >> n >> k >> x;
    int a[n];
    s = 0;
    rep(i, 0, n) cin >> a[i], s += a[i];
    l = 1; r = n * k;
    if(s*k < x) {
        cout << 0 << '\n';
        return;
    }
    while(l <= r){
        m = l + (r-l)/2;
        ca = (n*k - m + 1)/n;
        su = (n*k -m + 1)%n;
        s1 = s * ca;
        rep(i, n-su, n) s1 += a[i];
        if(s1 < x){
            r = m-1;
        } else {
            l = m+1;
        }
    }
    cout << r << '\n';
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt; 
    cin >> tt;
    while(tt--) solve();
    return 0;
}