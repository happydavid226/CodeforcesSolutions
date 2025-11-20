#include <iostream>
#include <map>
using namespace std;

void solve(){
    string s;
    cin >> s;
    int n = s.size();
    map<char, int> mp;
    for(int i = 0; i < n; i++){
        mp[s[i]]++;
    }
    for(int i =0; i < mp['T']; i++){
        cout << 'T';
    }
    for(auto x : mp){
        if(x.first == 'T') continue;
        for(int i = 0; i < x.second; i++){
            cout << x.first;
        }
    }
    cout << '\n';
    
}

int main(){
    int tt; cin >> tt; while(tt--) solve();
    return 0;
}