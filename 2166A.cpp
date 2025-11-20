#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt; 
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;

        string s;
        cin >> s;

        vector<int>a(26, 0);
        for(int i = 0; i < n; i++){
            a[s[i]-97]++;
        }
        cout << n-a[s[n-1]-97] << endl;
    }
}