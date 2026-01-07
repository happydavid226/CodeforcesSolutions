#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n, ans = 0; cin >> n;
        vector<int> a(n), suff(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        suff[n-1] = a[n-1];
        for(int i = n-2; i >= 0; i--){
            suff[i] = min(a[i], suff[i+1]);
        }
        for(int i = 0; i < n; i++){
            if(a[i] > suff[i]) ans++;
        }
        cout << ans << '\n';
    }
}