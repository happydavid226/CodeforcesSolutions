#include <bits/stdc++.h>
using namespace std;

bool issorted(vector<int>& a){
    int n = a.size();
    for(int i = 0; i < n-1; i++)
        if(a[i] >= a[i+1]) return false;
    return true;
}

int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n, m;
        cin >> n >> m;
        vector<int> a(m);
        for(int i = 0; i < m; i++)cin >> a[i];
        if(issorted(a)){
            cout << (n - a[m-1] + 1) << endl;
        } else {
            cout << 1 << endl;
        }
    }
}