#include <bits/stdc++.h>
#define int long long
using namespace std;

bool check(int n){
    int a = sqrt(n);
    if((a * a) == n){
	return true;
    }
    return false;
}
int n, sum,prefixSum;

void solve(){
    cin >> n;
    sum = (n*(n+1))/2;
    if(check(sum)) { cout << -1 << "\n"; return; }
    prefixSum = 0;
    bool flag = false;
    for(int i = 1; i <= n; i++){
        flag = false;
	prefixSum += i;
        if(check(prefixSum)){
	    cout << i+1 << " ";
            flag = true;
        }
        
        cout << i << " ";
        if(flag) { i++; prefixSum += i; }
    }
    cout << "\n";
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}