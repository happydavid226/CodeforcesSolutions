#include <bits/stdc++.h>
#define int long long
using namespace std;

namespace me {
    int max(int a, int b){
        return (a > b) ? a : b;
    }
}

int maxSubSum(const vector<int>& a){
    int sum, best, n = a.size();
    sum = best = 0;
    for(int i = 0; i < n; i++){
        sum = me::max(a[i], sum + a[i]);
        best = me::max(sum, best);
    }
    return best;
}

int32_t main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n; 
        cin >> n;
        vector<int> a(n);
        int sum = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            sum += a[i];
            a[i] = (i+1)*2 - a[i];
        }
        cout << (sum + me::max(0, maxSubSum(a))) << '\n';
    }
}