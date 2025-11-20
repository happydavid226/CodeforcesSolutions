#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin >> tt;

    while(tt--){
        bool flag = true;
        int n;
        cin >> n;

        vector<int> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];
        string s;
        cin >> s;

        int mi, ma; mi = ma = 0;
        for(int i = 0; i < n; i++){
            if(a[i] == 1) mi = i+1;
            if(a[i] == n) ma = i+1;
        }
        for(int i = 0; i < n; i++){
            if(s[i] == '1' && (i == 0 || i == n-1 || a[i] == 1 || a[i] == n)){
                cout << -1 << '\n';
                flag = false;
                break;
            }
        }
        if(!flag){
            continue;
        }
        if(mi > ma){
            swap(mi, ma);
        }
        cout << 5 << '\n';
        cout << 1 << ' ' << mi << '\n'; 
        cout << mi << ' ' << ma << '\n';
        cout << ma << ' ' << n << '\n';
        cout << mi << ' ' << n << '\n';
        cout << 1 << ' ' << ma << '\n';
    }
}