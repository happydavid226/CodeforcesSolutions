#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> a(n);
    bool flagOdd = false, flagEven = false;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] & 1) flagOdd = true;
        if(a[i] % 2 == 0) flagEven = true;
    } 

    if((flagOdd == false || flagEven == false) && (flagOdd != flagEven)){
        cout << "Yes\n";
        return;
    }

    for(int i = 0; i<n; i+=2){
        a[i] += 1;
    }

    flagEven = flagOdd = false;
    for(int i = 0; i< n; i++){
        if(a[i] & 1) flagOdd = true;
        if(a[i] % 2 == 0) flagEven = true;
    }


    if(flagOdd && flagEven){
        cout << "No\n";
    } else {
        cout << "yes\n";
    }

}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt; 
    while(tt--) solve();
    return 0;
}