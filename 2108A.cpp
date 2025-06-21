#include <bits/stdc++.h>
#define int long long
using namespace std;


void solve(){
    int  n; cin >> n;
    int sum = 0;
    int j = 1;
    for(int i = n; i >= 1; i--){
	sum += abs(i - j); 
        j++;
    }
    cout << sum/2 + 1 << "\n";
}


int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int t; cin >> t; while(t--) solve();
    return 0;
}