#include <iostream>
#include <vector>
#include <cstdint>
#include <set>
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
    set<int> s;
    rep(i, 0, n){
        int data;
        cin >> data;
        s.insert(data);
    }
    if((s.size() == 2 && s.count(-1) && (!s.count(0))) || (s.size() == 1 && !s.count(0))){
        cout << "yes\n";
    }
    else {
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