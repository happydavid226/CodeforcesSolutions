#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt; 
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;

        vector<vector<int>> a(n+2, vector<int>(n+2, 0));
        int cnt = 1;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                a[i][j] = cnt++;
            }
        }
        int ans = 0;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                ans = max(ans, a[i][j] + a[i+1][j] + a[i-1][j] + a[i][j-1] + a[i][j+1]);
            }
        }
        cout << ans << endl;
    }
}