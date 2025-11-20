#include <iostream>
#include <vector>
#include <cstdint>
#define int long long
#define pii pair<int,int>
#define vi vector<int>
#define vb vector<bool> 
#define ll long long
#define ull unsigned long long
#define mod 998244353LL
#define rep(i, a, n) for(int i = (a); i < (n); i++)
#define rop(i, n , a) for(int i = (n); i >= (a); i--)
using namespace std;

int power(int i){
    int ans = 1LL;
    int base = 2LL;
    while(i > 0){
        if(i&1) ans = (ans * base) % mod;
        i >>= 1;
        base = (base * base) % mod;
    }
    return ans;
}
 
void solve(){
    int n;
    cin >> n;
    vi p(n), q(n), mxp(n), mxq(n), r(n);
    int mx_number = 0;
    rep(i, 0, n){
        cin >> p[i];
        if(i == 0){
            mx_number = p[i];
            mxp[i] = 0;
        } else {
            if(p[i] > mx_number){
                mxp[i] = i;
                mx_number = p[i];
            } else {
                mxp[i] = mxp[i-1];
            }
        }
    }
    rep(i, 0, n){
        cin >> q[i];
        if(i == 0){
            mx_number = q[i];
            mxq[i] = 0;
        } else {
            if(q[i] > mx_number){
                mxq[i] = i;
                mx_number = q[i];
            } else {
                mxq[i] = mxq[i-1];
            }
        }
    }
    
    rep(i, 0, n){
        if(p[mxp[i]] == q[mxq[i]]){
            if(q[i-mxp[i]] > p[i-mxq[i]]){
                r[i] = (power(p[mxp[i]]) + power(q[i-mxp[i]])) % mod;
            } else {
                r[i] = (power(q[mxq[i]]) + power(p[i-mxq[i]])) % mod;
            }
        } else if (p[mxp[i]] > q[mxq[i]]){
            r[i] = (power(p[mxp[i]]) + power(q[i-mxp[i]])) % mod;
        } else {
            r[i] = (power(q[mxq[i]]) + power(p[i-mxq[i]])) % mod;
        }
    }
    rep(i, 0, n){
        cout << r[i] << ' ';
    }
    cout << '\n';
}
 
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int tt = 1; 
    cin >> tt; 
    while(tt--) solve();
    return 0;
}