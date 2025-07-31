#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n), b(n), c(n), d(n);


    int ans = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i] >> b[i] >> c[i] >> d[i];
        if(b[i] > d[i]){
            int patient_zeros = ((a[i] > c[i]) ? c[i] : a[i]);
            ans += patient_zeros;
        }

        if(c[i] > a[i]) ans += c[i] - a[i];
        if(d[i] > b[i]) ans += d[i] - b[i];
    }
    cout << ans << '\n';
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt; cin >> tt; while(tt--) solve();
}