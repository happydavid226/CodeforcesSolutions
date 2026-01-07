#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n; cin >> n;
        vector<int> a(n), b(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];
        bool flag = true;
        if(a[n-1] != b[n-1]) flag = false;
        for(int i = 0; i+1 < n; i++) if((a[i] != b[i]) && ((a[i] ^ a[i+1]) != b[i])) flag = false;
        cout << (flag ? "Yes\n" : "No\n");
    }
    return 0;
}