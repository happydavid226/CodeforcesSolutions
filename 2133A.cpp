#include <iostream>
#include <vector>
#include <map>
using namespace std;

void solve(){
    int n;
    cin >> n;

    map<int, int> mp;
    bool flag = false;
    for(int i = 0; i < n; i++){
        int data; cin >> data;
        mp[data]++;
        if(mp[data] == 2)flag = true;
    }
    if(flag){
        cout << "yes\n";
    } else {
        cout << "no\n";
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt = 1;
    cin >> tt; while(tt--) solve();
    return 0;
}