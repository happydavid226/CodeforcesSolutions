#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];

        vector<int> prefixMax1(n), suffixMax2(n);
        prefixMax1[0] = a[0];
        for(int i = 1; i < n; i++){
            prefixMax1[i] = max(a[i], prefixMax1[i-1]);
        }

        suffixMax2[n-1] = b[n-1];
        for(int i = n-2; i >= 0; i--){
            suffixMax2[i] = max(suffixMax2[i+1], b[i]);
        }

        vector<int> prefixMin1(n), suffixMin2(n);
        prefixMin1[0] =  a[0];
        for(int i = 1; i < n; i++)
            prefixMin1[i] = min(prefixMin1[i-1], a[i]);

        suffixMin2[n-1] = b[n-1];
        
        for(int i = n-2; i >= 0; i--){
            suffixMin2[i] = min(suffixMin2[i+1], b[i]);
        }

        vector<int> minimums(n), maximums(n);
        for(int i = 0; i < n; i++){
            minimums[i] = (min(prefixMin1[i], suffixMin2[i]));
            maximums[i] = (max(prefixMax1[i], suffixMax2[i]));
        }
        sort(minimums.begin(), minimums.end());
        sort(maximums.begin(), maximums.end());

        int mi = minimums[n-1];
        int ma = maximums[0];

        cout << ((2*n - ma + 1) * mi) << endl;
    }
    return 0;
}