#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt; cin >> tt;
    while(tt--){
        int n; cin >> n;
        vector<int> a(n);
        int cnt = 0;
        for(int i = 0; i <n; i++){
            cin >> a[i];
            if(a[i] == 0) cnt++;
        }
        bool flag = true;
        for(int i = 0; i < n-1; i++){
            if(!a[i] == !a[i+1]){}
        }
    }
    return 0;
}