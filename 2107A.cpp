#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N = 20000;
vector<int> a(N);
int countodds, countevens;
set<int> odds, evens;

int is_odd(int n){
    if(n & 1) return true;
    else return false;
}

void solve(){
    int n; cin >> n;
    countodds = countevens = 0;
    for(int i = 0; i < n; i++){
	cin >> a[i];
    }
    
    odds.clear();
    evens.clear();

    if(countodds != 0 && countevens != 0){
	
    }
      
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t; while(t--) solve();
    return 0;
}