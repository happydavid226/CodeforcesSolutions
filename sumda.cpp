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

void solve(){
    int n, x; cin >> n >> x;
    if(n == 1 && x == 0){
        cout << -1 << '\n'; return;
    }
    if(x == 1 && n % 2 == 0){
        cout << -1  << '\n'; return;
    }
    if(x == 0 && n % 2 == 0){
        cout  << -1 << '\n';return;
    }

    if(n&1){
        cout << (n-1 + x) << '\n';
        return;
    } 
    if(x &1){
        cout << ((n-1) + (x-1)) << '\n';
        return;
    }
    cout << ((n-1) + (x+1)) << '\n';
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt = 1; 
    cin >> tt; 
    while(tt--) solve();
    return 0;
}