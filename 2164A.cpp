#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int tt;
    cin >> tt; 
    while(tt--){
        int n, x;
        cin >> n;
        vector<int> a(n);

        for(int i = 0; i < n; i++)
            cin >> a[i];
        cin >> x;

        bool flag = false;
        sort(a.begin(), a.end());
        if(x >= a[0] && x <= a[n-1]) flag = true;
        if(flag){
            cout << "YES" << '\n';
        } else {
            cout << "NO\n";
        }
    }
}