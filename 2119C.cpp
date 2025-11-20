#include <iostream>
#include <vector>
#include <cstdint>
#define pii pair<int,int>
#define vi vector<int>
#define vb vector<bool> 
#define ll long long
#define ull unsigned long long int
#define rep(i, a, n) for(int i = (a); i < (n); i++)
#define rop(i, n , a) for(int i = (n); i >= (a); i--)
using namespace std;

bool is_power_of_two(int k){
    if(k == 0) return false;
    if(k == 1) return true;
    if(k&1) return false;
    return true && is_power_of_two(k >> 1);
}

ull large_pow(ull k){
    ull ans = 1LL;
    if(is_power_of_two(k)) return k*2;
    while(ans < k){
        ans *= 2LL;
    }
    return ans;
}

void solve(){
    ull n, l, r, k;
    cin >> n >> l >> r >> k;
    if(n==2){cout << -1 << '\n'; return; }
    if(n&1){ cout << l << '\n'; return; }
    ull ans = large_pow(l);
    
    //cout << "ans is " << ans << '\n';
    if(ans <= r){
        if(k < n-1){
            cout << l << '\n';
        } else cout << ans << '\n';
    } else cout << -1 << '\n';
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt = 1; 
    cin >> tt; 
    while(tt--) solve();
    return 0;
}