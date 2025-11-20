#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt; 
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end());

        bool flag = true;
        for(int i = 1; i < n-1; i+=2){
            if(a[i] != a[i+1]){
                flag =false;
                break;
            }
        }
        if(flag){
            cout << "yes\n";
        } else {
            cout << "no\n";
        }
    }
}