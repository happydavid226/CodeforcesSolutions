#include <bits/stdc++.h>

#define int long long
using namespace std;

const int mod = 998244353;

int power(int j){
    int ans = 1LL;
    int base = 2LL;
    while(j > 0){
        if(j & 1) ans = (ans * base) % mod;
        base = (base * base) % mod;
        j >>= 1;
    }
    return ans;
}
vector<int> powers;

void solve(){
    int n;
    cin >> n;
    vector<int> p(n), q(n), pm(n), qm(n), r(n), pp(n), qp(n);

    int posp, posq;
    for(int i = 0; i < n; i++){
        cin >> p[i];
        if(i == 0){
            pm[i] = p[i];
            pp[i] = i;
            posp = i;
        } else {
            if(p[i] > pm[i-1]){
                pm[i] =  p[i];
                posp = i;
            } else {
                pm[i] = pm[i-1];
            }
        }
        pp[i] = posp;
    }
    for(int i = 0; i < n;i++){
        cin >> q[i];
        if(i == 0){
            qm[i] = q[i];
            qp[i] = i;
            posq = i;
        } else {
            if(q[i] > qm[i-1]){
                qm[i] = q[i];
                posq = i;
            } else {
                qm[i] = qm[i-1];
            }
        }
        qp[i] = posq;
        if(pm[i] == qm[i]){
            int j = pp[i];
            int ans1 = (powers[p[j]] + powers[q[i-j]]) % mod;
            j = qp[i];
            int ans2 = (powers[p[i-j]] + powers[q[j]]) % mod;
            r[i] = max(ans1, ans2);
        }
        else if(pm[i] > qm[i]){
            int j = pp[i];

            r[i] = (powers[p[j]] + powers[q[i-j]]) % mod;
        } else {
            int j = qp[i];
            r[i] = (powers[p[i-j]] + powers[q[j]]) % mod;
        }
    }
    
    for(auto x : r ){
        cout << x << ' ';
    } cout << '\n';
    
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    powers.resize(100002);
    for(int i = 0; i < powers.size(); i++){
        powers[i] = power(i);
    }

    int tt; cin >> tt; while(tt--) solve();
    return 0;
}