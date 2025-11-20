#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int tt; cin >> tt;
    while(tt--){
        int m, n, s1 = 0, s2 = 0; cin >> n; m = n * 2;
        vector<int> a(n), b(n);
        for(int i = 0; i < m; i++){
            if(i&1) cin >> b[i/2], s2 += b[i/2];
            else cin >> a[i/2], s1 += a[i/2];
        }
        int ans = 0, cum = 0;
        vector<int> answ;
        for(int i = 0; i < n; i++){
            if((i == 0)){
                ans = cum + (s2-s1);
                answ.push_back(ans);
            } else {
                ans = cum + (s1 - s2);
                answ.push_back(ans);
            }
            s1 -= a[i];
            s2 -= b[n-i-1];
            cum += b[n-i-1] - a[i];
        }
        sort(answ.begin(), answ.end());
        for(const int& x : answ) cout << x << ' ';
        cout << endl;
    }
}