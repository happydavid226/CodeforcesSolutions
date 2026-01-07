#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        ll n, k, ans = 0; cin >> n >> k;
        if(k == 1 || k > n) { cout << n << '\n'; continue; }
        vector<ll> powers;
        ll cur = 1;
        while(cur <= n){
            powers.push_back(cur);
            cur *= k;
        }
        int i = powers.size()-1;
        while(n > 0 && i >= 0){
            ans += n/powers[i], n = n % powers[i];
            i--;
        }
        cout << ans << '\n';
    }
    return 0;
}