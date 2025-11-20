#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, k, x;
    cin >> n >> k >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    if (accumulate(a.begin(), a.end(), 0ll) * k < x){
        cout << 0 << '\n';
        return;
    }

    int l = 1, r = n * k;
    while(l <= r){
        cout << "l is " << l << " and r is " << r << '\n';
        int m = l + (r - l) / 2;
        cout << "m is " << m << '\n'; 
        
        int cnt_a = (n * k - m + 1) / n; cout << "cnt_a is " << cnt_a << '\n';
        int suff = (n * k - m + 1) % n; cout << "suff is " << suff << '\n';
        int sum = cnt_a * accumulate(a.begin(), a.end(), 0ll); cout << "sum is " << '\n';
        for (int i = n - suff; i < n; i++){
            cout << "\t i is " << i << '\n';
            sum += a[i];
            cout << "\t sum is " << sum << '\n';
        }
        if (sum < x){
            r = m - 1;
        }
        else{
            l = m + 1;
        }
    }

    cout << r << '\n';
}
 
signed main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	cin >> t;
	while(t--){
	    solve();
	}
}