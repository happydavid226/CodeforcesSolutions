#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>
#define pii pair<int,int>
#define vi vector<int>
#define vb vector<bool> 
#define ll long long
#define ull unsigned long long int
#define rep(i, a, n) for(int i = (a); i < (n); i++)
#define rop(i, n , a) for(int i = (n); i >= (a); i--)
using namespace std;

void solve(){
    int n, k; cin >> n >> k;
    vi a(n), b(n);
    rep(i, 0, n){
        cin >> a[i];
        a[i] %= k;
        a[i] = min(a[i], k - a[i]);
    }

    rep(i, 0, n){
        cin >> b[i];
        b[i] %= k;
        b[i] = min(b[i], k - b[i]);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    cout << (a == b ? "yes\n" : "no\n");
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt = 1; 
    cin >> tt; 
    while(tt--) solve();
    return 0;
}