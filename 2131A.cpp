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

void solve(){
    int n;
    cin >> n;
    vi a(n); rep(i, 0, n) cin >> a[i];
    vi b(n); rep(i, 0, n) cin >> b[i];
    int ans = 0;
    rep(i, 0, n){
        if(a[i] > b[i]){
            ans += a[i] - b[i];
        }
    }
    cout << (ans+1) << '\n';
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt = 1; 
    cin >> tt; 
    while(tt--) solve();
    return 0;
}