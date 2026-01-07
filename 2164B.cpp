#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n, cnt_even = 0; cin >> n;
        vector<ll> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if((a[i]&1)== 0) cnt_even++;
        }
        if(cnt_even >= 2){
            for(ll i = 0, cnt = 0; i < n && cnt < 2; i++){
                if((a[i]&1) == 0) cout << a[i] << ' ', cnt++;
            } cout << '\n';
            continue; 
        }
        ll x, y;
        bool flag = false;
        for(int i = 1; i < n ;i++){
            flag = false;
            if((a[i]&1) == 0){
                for(int j = 0; j < i; j++){
                    if((a[j]&1) && ((a[i]/a[j])&1) == 0) { x  = a[j], y = a[i]; flag = true; break; }
                }
            } else {
                for(int j = 0; j < i; j++){
                    if((a[j]&1) && ((a[i]/a[j])&1)) {
                        x = a[j], y = a[i], flag = true;
                        break;
                    }
                }
            }
            if(flag) {break;}
        }
        if(flag) {
            cout << x << ' ' << y << '\n';
            continue; 
        }
        cout << -1 << '\n';
    }
}