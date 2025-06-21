#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<int> a;
int n, k, i , ma, mi, sum, countma;

void solve(){
    cin >>n >> k;
    a.resize(n);
    mi = 100000000000;
    ma = 0;
    sum = 0;
    countma = 0;
    for(i = 0; i< n; i++) cin >> a[i], ma = max(ma, a[i]), mi = min(mi, a[i]), sum += a[i];
    if(ma - mi > k + 1) cout << "Jerry\n";
    else {
        for(int i = 0; i < n; i++){ if(a[i] == ma) countma++; }
        if(countma > 1 && ma - mi > k) {cout << "Jerry\n"; return; }
	if(sum & 1) cout << "Tom\n";
        else cout << "Jerry\n";
    }
    //a.resize(0);
    
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int tt; cin >> tt; while(tt--) solve();
    return 0;
}