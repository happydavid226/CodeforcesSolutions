#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, m , k, a1, a2, q;
    cin >> n >> m >> k >> a1 >> a2 >>  q;
    int mi = min(a1, a2);
    int ma = max(a1, a2);

    if(ma < q){
	cout << n - ma << "\n"; return;
    }
    if(mi > q){
        cout << mi-1 << "\n"; return;
    }
    if(mi == q || ma == q){
	cout << 0 << "\n"; return;
    }
    cout << (ma - mi) / 2 << "\n";
    
    
}

int main(){
    int t; cin >> t; while(t--) solve();
    return 0;
}