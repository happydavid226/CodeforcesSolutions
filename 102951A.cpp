#include <bits/stdc++.h>
#define int long long
using namespace std;

int power(int x, int y){
    int ans = 1;
    while(y > 0){
        if(y & 1) ans *= x;
        y >>= 1;
        x *= x;
    }
    return ans;
}

int findDistance(int x1, int y1, int x2 , int y2){
    return power(x2- x1, 2) + power(y2-y1, 2);
}

int32_t main(){
    int n; cin >> n;
    vector<int> x(n);
    vector<int> y(n);
    for(int i  = 0; i < n; i++) cin >> x[i];
    for(int i = 0; i < n; i++) cin >> y[i];
    int ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(i != j){
                ans = max(ans, findDistance(x[i], y[i], x[j], y[j]));
            }
        }
    }
    cout << ans << "\n";
    return 0;
}