/*God help me*/
#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> veven, vodd;
    int cnt_odd = 0, cnt_even = 0;
    int data;
    for(int i = 0; i < n; i++){
        cin >> data;
        if(data&1){
            vodd.push_back(data);
            cnt_odd++;
        } else {
            veven.push_back(data);
            cnt_even++;
        }
    }
    sort(vodd.rbegin(), vodd.rend());
    sort(veven.rbegin(), veven.rend());

    if(cnt_odd == 0){
        for(int i = 1; i <= n; i++){
            cout << 0 << ' ';
        } cout << '\n';
        return;
    } 
    if(cnt_even == 0){
        for(int i = 1; i <= n; i++){
            if(i&1){
                cout << vodd[0] << ' ';
            } else {
                cout << 0 << ' ';
            }
        } cout << '\n';
        return;
    }

    int j = 0, i = 0;
    vector<int> ans(n, 0);
    for(i = 0; i < cnt_even+1; i++){
        if(i == 0){
            ans[i] = vodd[0];
        } else {
            ans[i] = ans[i-1] + veven[j];
            j++;
        }
    }
    cnt_odd--;
    while(i < n){
        if(cnt_odd >= 2){
            ans[i] = ans[i-2]; 
            i++;
            ans[i] = ans[i-2];
            i++;
            cnt_odd -= 2;
        } else break;
    }
    for(int i = 0;i < n; i++){
        cout << ans[i] << ' ';
    } cout << '\n';
}

int32_t main(){
    int tt;
    cin >> tt;
    while(tt--){
        solve();
    }
    return 0;
}