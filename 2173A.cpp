#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    int l = 0, r = 0;
    int real_ans = 0;
    while(l < n && r < n){
        //move to the next 0
        while(l < n && s[l] != '0'){
            l++;
            r++;
            if(l >= n){
                cout << real_ans << endl;
                return;
            }
        }
        //cout << "the next 0 is at : " << l << endl;
        //move to the end of streak of 0s

        while(r < n && s[r] != '1') {
            r++;
        }
        //cout << "the streak of 0s ends at : " << r << endl;
        int ans = 0;
        if(l == 0){
            ans = r;
        } else {
            int len = r - l;
            ans = max(0, len - k);
        }
        //cout << "the sleeping time is : " << ans << endl;
        real_ans += ans;
        //cout << "the total time becomes : " << real_ans << endl;
        l = r;
    }
    cout << real_ans << endl;
}

int main(){
    int tt;
    cin >> tt;
    while(tt--){
        solve();
    }
    return 0;
}