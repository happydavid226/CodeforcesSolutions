#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        vector<int> a(n), p(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(i == 0){
                p[i] = a[i];
            } else {
                p[i] = max(a[i], p[i-1]);
            }
        }
        int ans = 0;
        for(int i = 0; i < n; i++){
            if(p[i] > a[i]) ans++;
        }
        cout << ans << endl;
    }
}