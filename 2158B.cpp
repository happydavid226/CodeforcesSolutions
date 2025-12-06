#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> cnt(2*n, 0);
    bool flag = false;
    int uni = 0;
    for(int i = 0; i < 2*n; i++){
        int data;
        cin >> data;
        if(cnt[data-1] == 0) uni++;
        cnt[data-1]++; 
        if(cnt[data-1] >= n){
            flag = false;
        } 
    }
    cout << (n % 2 == 0 && flag == false ? uni : uni-1) << endl;  
}

int main(){
    int tt;
    cin >> tt;

    while(tt--){
        solve();
    }
}