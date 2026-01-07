#include <bits/stdc++.h>
using namespace std;
vector<vector<string>> dp;
int x;

void  my_compare(string a, string b){
    int A = 0, B = a.size();
    int n = B;
    for(int i = 0; i < n; i++){
        if(a[i] == b[i]) A++, B--;
    }
    cout << A << "A" << B << "B\n";
}

void solve(){
    int n, j, k;
    cin >> n >> j >> k;
    j--; k--;
    if(n == 12) x = 0;
    else if(n == 123) x = 1;
    else if(n == 1234) x = 2;
    my_compare(dp[x][j], dp[x][k]);
}

int main(){
    int tt;
    cin >> tt;
    dp.assign(3, {});
    dp[0] =    {"12", "21"};
    dp[1] =   {"123", "132", "213", "231", "312", "321"};
    dp[2] =  {"1234", "1243", "1324", "1342", "1423", "1432",
         "2134", "2143", "2314", "2341", "2413", "2431",
         "3124", "3142", "3214", "3241", "3412", "3421",
         "4123", "4132", "4213", "4231", "4312", "4321"
        };
    while(tt--){
        solve();
    }
}