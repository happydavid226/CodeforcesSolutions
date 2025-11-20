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

int tt;

void solve(){
    int n, k;
    cin >> n >> k;
    string s; cin >> s;
    
    int zeros, ones, pairs; zeros = ones = pairs = 0;
    rep(i, 0, n){
        if(s[i] == '0') zeros++;
        else ones++;
    }
    if((zeros/2) + (ones/2) < k){
        cout << "no\n";
        return;
    }

    if(k == 0){
        if(ones == zeros){
            cout << "yes\n";
        } else {
            cout << "no\n";
        }
        return;
    }
    while(true){
        if(zeros > ones){
            zeros -= 2;
            pairs++;
        } else {
            ones -= 2;
            pairs++;
        }
        if(pairs == k){
            if(zeros == ones){
                cout << "yes\n";
                return;
            } else {
                cout << "no\n";
                return;
            }
        }
    }
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    
    cin >> tt; 
    for(int i = 1; i <= tt; i++) solve();
    return 0;
}