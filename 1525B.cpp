#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin >> n;
    bool inversion, fip1, finip, oip5, oinip;
    inversion = fip1 = finip = oip5 = oinip = false;

    vector<int> a(n);
    for(int i =0; i < n ; i++){
        cin >> a[i];
    }
    if(a[0] == n){
        fip1 = true;
    }
    if(a[n-1] == 1){
        oip5 = true;
    }
    if(a[0] != 1) oinip = true;
    if(a[n-1] != n) finip = true;
    for(int i = 0; i < n - 1; i++){
        if(a[i] > a[i+1]){
            inversion = true;
        }
    }
    if(!inversion){
        cout << 0 << '\n';
        return;
    }
    if(fip1 && oip5){
        cout << 3 << '\n';
        return;
    }
    if(oinip && finip){
        cout << 2 << '\n';
        return;
    }
    if(inversion){
        cout << 1 << '\n';
        return;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt; cin >> tt; while(tt--) solve();
    return 0;
}