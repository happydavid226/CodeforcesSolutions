#include <bits/stdc++.h>
using namespace std;

long long llmax(long long a , long long b) { return (a > b ? a : b); }

int main(){
    int tt;
    cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        if(k == 1) {long long an = *max_element(a.begin()+1, a.end())+a[0]; an = llmax(an, *max_element(a.begin(), a.end()-1)+a[n-1]); cout << an << '\n'; continue; }
        sort(a.begin(), a.end());
        long long ans = 0;
        for(int i = 0; i < n; i++) if(i >= n - k - 1) ans += a[i];
        cout << ans << '\n';
    }
}