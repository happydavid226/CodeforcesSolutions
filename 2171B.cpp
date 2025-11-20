#include <bits/stdc++.h>
#define int long long
using namespace std;
 
int32_t main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        vector<int> a(n);
 
        for(int i = 0; i < n; i++) cin >> a[i];
        if(a[0] == -1 && a[n-1] == -1){
            a[0] = a[n-1] = 0;
        } else if(a[0] == -1){
            a[0] = a[n-1];
        } else if(a[n-1] == -1){
            a[n-1] = a[0];
        }
        for(int i =0; i < n; i++){
            if(a[i] == -1) a[i] = 0;
        }
        int ans = 0;
        for(int i = 0; i < n-1; i++){
            ans += a[i+1] - a[i];
        }
        cout << llabs(ans) << '\n';
        for(int i = 0; i < n; i++){
            cout << a[i] << ' ';
        } cout << endl;
    }
}