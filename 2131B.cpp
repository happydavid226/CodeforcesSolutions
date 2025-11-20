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

    if(n & 1){
        rep(i, 0, n){
            if(i%2 == 0){
                cout << -1 << ' ';
            } else {
                cout << 3 << ' ';
            }
        }
        cout << '\n';
        return;
    }
    rep(i, 0, n-1){
        if(i % 2 == 0){
            cout << -1 << ' ';
        } else {
            cout << 3 << ' ';
        }
    }
    cout << 2 << '\n';
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt = 1; 
    cin >> tt; 
    while(tt--) solve();
    return 0;
}