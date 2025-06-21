#include <bits/stdc++.h>
#define int int64_t
using namespace std;

int n, a[100000], tt, fi,i, flag;


int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> tt;
    while(tt--){
	cin >> n;
    	for(i = 0; i < n; i++) { cin >> a[i]; flag =abs(a[i]); a[i] = flag; }
    
    	fi = a[0];
    	sort(a, a+n);
    	if(a[n/2] < fi) cout << "no\n";
    	else cout << "yes\n";
    }
    return 0;
}