#include <iostream>
#include <vector>
#include <cstdint>
#include <map>
#define pii pair<int,int>
#define vi vector<int>
#define vb vector<bool> 
#define ll long long
#define ull unsigned long long
#define int long long
#define rep(i, a, n) for(int i = (a); i < (n); i++)
#define rop(i, n , a) for(int i = (n); i >= (a); i--)
using namespace std;

void solve(){
    int n;
    cin >> n;
    vi a(n); rep(i, 0, n) cin >> a[i], a[i]--;
    map<int,int> mp;
    rep(i, 0, n){
        mp[a[i] -i]++;
    }

    ull ans = 0LL;
    for(const auto& x : mp){
        if(x.second > 1){
            n = x.second;
            ans += (n * (n-1)) / 2;
        }
    }
    cout << ans << '\n';
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt = 1; 
    cin >> tt; 
    while(tt--) solve();
    return 0;
}