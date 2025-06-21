#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N = 200001;

int a[N];
int p[N];
int n, k, x, i, ans, ls, *low, tt;



void solve(){
    cin >> n >> k >> x;
    for(i = n-1; i >= 0; i--){
	cin >> a[i];
        if(i == n-1) p[i] = a[i];
        else p[i] = p[i+1] + a[i];
    } 
    ans = 0;
    ans += (x / p[0]);
    x -= ans * p[0];
    ls = 0;
    if(x == 0) { cout << ans << "\n"; return; }
    low = lower_bound(p, p + n , x);
    ls = low - p;
    ans += ls;
    cout << ans << "\n";   
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> tt;
    while(tt--) solve();
    return 0;
}