#include <bits/stdc++.h>
#define int long long
using namespace std;


int tt, n,i, flag1 = 1, flag2 = 1;
vector<int> a, b, c;

void solve(){
    flag1 = flag2 = 1;
    cin >> n;
    a.resize(n); b.resize(n); c.resize(n);
    
    for(int i = 0; i < n; i++) cin >> a[i], c[i] = a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    
    reverse(c.begin(), c.end());
    for(int i = 0; i < n; i++){
	if(a[i] != b[i]) { flag1 = 0; break; }
    }
    for(int i = 0; i < n; i++){
	if(b[i] != c[i] ){  flag2 = 0; break; }
    }

    if(flag1 | flag2) cout << "Bob\n";
    else cout << "Alice\n"; 
    a.resize(0);
    b.resize(0);
    c.resize(0);
}


int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> tt; while(tt--) solve();
    return 0;
}

/*

   1234
   1234
   




*/