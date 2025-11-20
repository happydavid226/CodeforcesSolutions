#include <iostream>
#include <vector>
#define rep(i, a, n); for(int i = a; i < n; ++i)
#define vi vector<int>
using namespace std;

int count_inversions(vector<int>& p){
    int n = p.size();
    int inv = 0;
    rep(i , 0,  n){
        rep(j, i+1, n){
            if(p[j] < p[i]) inv++;
        }
    }
    return inv;
}

void solve(){
    int n;
    cin >> n;
    vi a(n);
    rep(i, 0, n) cin >> a[i];
    vi p(n);
    rep(i, 0, n){
        p[i] = 2 * n - a[i];
    }
    vi h(n);
    rep(i, 0, n){
        if(i == 0 || a[i] == p[i] || (p[i] > h[i-1] && a[i] > h[i-1]) || (p[i] < h[i-1] && a[i] < h[i-1])){
            h[i] = min(a[i], p[i]);
            continue;
        }
        if(p[i] > h[i-1]){
            h[i] = p[i];
            continue;
        }
        if(a[i] > h[i-1]){
            h[i] = a[i];
            continue;
        }

    }
    cout << count_inversions(h) << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt; cin >> tt; while(tt--) solve();
    return 0;
}