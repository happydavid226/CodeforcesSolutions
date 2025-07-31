#include <bits/stdc++.h>
#define int long long
using namespace std;
vector<int> b;
vector<int> a;
 
void solve(){
    int n, k, x; cin >> n >> k >> x;
    a.resize(n); for(int i = 0; i < n; i++) cin >> a[i];
    b.resize(n * k);
    for(int i = 0; i < n*k; i++){
	b[i] = a[i%n]; 
    }
    reverse(b.begin(), b.end());
    int sum = 0;
    int ans = 0;
    if(x == 0){ cout << n * k << "\n"; return;}
    for(int i = 0; i < n *k; i++){
	sum += b[i];
        if(sum >= x){
	    ans = n * k - i;
            break;
        }
	
    }
    cout << ans << "\n";
     
    
}
 
 
int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(nullptr);
    int t; cin >> t; while(t--) solve();
    return 0;
}