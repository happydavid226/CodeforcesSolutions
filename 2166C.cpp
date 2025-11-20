#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt; 
    cin >> tt; 
    while(tt--){
        int n;
        cin >> n;
        long long sum = 0;
        int mx = 0;
        vector<int>a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
            mx = max(a[i], mx);
        }
        for(int i = 0; i < n-1; i++){
            sum += max(a[i], a[i+1]);
        }
        sum += max(a[n-1], a[0]);
        sum -= mx;
        cout << sum << '\n';
    }
}