#include <iostream>
#include <cassert>
#include <map>
using namespace std;

void solve(){
    int n, s, sum = 0;
    cin >> n >> s;
    map<int,int> mp;
    for(int i = 0; i < n; i++){
        int data;
        cin >> data;
        sum += data;
        mp[data]++;
    }
    assert(mp.size() == 3);
    if(s < sum){
        for(const auto& x : mp){
            for(int i = 0; i < x.second; ++i){
                cout << x.first << ' ';
            } 
        }
        cout << '\n';
        return;
    }
    int diff = s - sum;
    if(s == sum || diff%2 == 0 || (diff % 2 == 1 && diff > 3) || diff % 3 == 0){
        cout << -1 << '\n';
        return;
    }
    
    for(int i = 0; i < mp[0]; i++){
        cout << 0 << ' ';
    }
    for(int i = 0; i < mp[2]; ++i){
        cout << 2 << ' ';
    }
    for(int i = 0; i < mp[1]; ++i){
        cout << 1 << ' ';
    }
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt; cin >> tt; while(tt--) solve();
    return 0;
}