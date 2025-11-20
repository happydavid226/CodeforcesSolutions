#include <iostream>
#include <vector>
#include <cstdint>
#define pii pair<int,int>
#define vi vector<int>
#define vb vector<bool> 
#define ll long long
#define ull unsigned long long
#define rep(i, a, n) for(int i = (a); i < (n); i++)
#define rop(i, n , a) for(int i = (n); i >= (a); i--)
using namespace std;

ll l, r;
ll find_ans(ll n){
    return ((r/n) - (l/n));
}

void solve(){
    cin >> l >> r;
    ll ans = r - l + 1LL;
    l--;
    
    ans -= find_ans(2LL);
    ans -= find_ans(3LL);
    ans -= find_ans(5LL);
    ans -= find_ans(7LL);

    ans += find_ans(2LL*3LL);
    ans += find_ans(2LL*5LL);
    ans += find_ans(2LL*7LL);
    ans += find_ans(3LL*5LL);
    ans += find_ans(3LL*7LL);
    ans += find_ans(5LL*7LL);

    ans -= find_ans(2LL*3LL*5LL);
    ans -= find_ans(2LL*3LL*7LL);
    ans -= find_ans(2LL*5LL*7LL);
    ans -= find_ans(3LL*5LL*7LL);

    ans += find_ans(2LL*3LL*5LL*7LL);    
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