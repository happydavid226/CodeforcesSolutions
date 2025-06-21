#include <bits/stdc++.h>
using namespace std;
int tt, n , m , p , q;

void solve(){
    cin >> n >> m >> p >> q;
    if( n % p == 0 and ((n/p) * q) != m){
	cout << "no\n"; return;
    }
    cout << "yes\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> tt; while(tt--) solve();
}

