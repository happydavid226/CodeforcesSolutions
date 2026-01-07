#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> z(n,0);

    int i = 0;
    for(;;i++){
        if(s[i] =='1') break;
    }
    z[i] = 1;
    i++; int ans = 1;
    
    for(int k = 0; k < n-1; k++){
        if(i == n){
            i = 0;
        } 
        if(s[i] == '1') z[i] = 1;
        
        if(z[i] == 0){
            z[i] = ++ans;
        } else {
            ans = z[i];
        }
        i++;
    }
    set<int> st;
    for(int i = 0; i < n; i++){
        st.insert(z[i]);
    }
    //cout << "z is "; for(int i = 0; i < n; i++) cout << z[i] << ' '; cout << endl;
    cout << st.size()-1 << endl;    
}

int main(){
    int tt;
    cin >> tt;
    while(tt--){
        solve();
    }
    return 0;
}