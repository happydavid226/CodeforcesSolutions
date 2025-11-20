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
    int n;
    cin >> n;

    vi a(n), diff(n, 0);
    rep(i, 0, n) cin >> a[i];

    rep(i, 0, n){
        diff[0] += 1;
        if(a[i] < n){
            diff[a[i]] -= 1;
        }
    }
    
    rep(i, 1, n){
        diff[i] += diff[i-1];
    }
    if(a == diff){
        cout << "yes\n";
    } else {
        cout << "no\n";
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