#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>
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
    int n, k; cin >> n >> k;
    vector<pii> p(n);
    rep(i, 0, n) cin >> p[i].first;
    rep(i, 0, n) cin >> p[i].second;
    ll ans = 0;
    rep(i, 0, n) {
        if(p[i].first > p[i].second) swap(p[i].first , p[i].second);
        ans += p[i].second - p[i].first;
    }
    sort(p.begin(), p.end());
    bool flag = false;
    int best = 1000000000;
    rep(i, 0, n-1){
        if(p[i+1].first <= p[i].second){
            flag = true;
        } else {
            best = min(best, (p[i+1].first - p[i].second));
        }
    }
    if(flag){
        cout << ans << '\n';
    } else {
        cout <<  (ans + (2*best)) << '\n';
    }
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt = 1; 
    cin >> tt; 
    while(tt--) solve();
    return 0;
}