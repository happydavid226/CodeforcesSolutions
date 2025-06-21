#include <bits/stdc++.h>
using namespace std;

int n, i, l , r, ans1, ans2, ans, cnt;
vector<int> a;

void solve(){
    cin >> n;
    a.resize(n);
    l = r = ans1 = ans2 = -1;
    ans = cnt = 0;
    for(i = 0; i < n; i++) cin >> a[i];
    map<int, int> freq;

    for(i = 0; i < n; i++) freq[a[i]]++;

    if(freq.size() == n){
        cout << 1 << " " << n << "\n";
        return;
    }

    for(i = 0; i <n; i++){
        if(freq[a[i]] == 1){
            if(l == -1){
                l = r = ans1 = ans2 = i;
            } else {
                r++;
            }
        } else {
            if(r-l > ans2 - ans1){
                ans2 = r;
                ans1 = l;
            } 
            l = i + 1;
            r = i;
        }
    }

    if(ans1 == -1){
        cout << 0 << "\n";
        return;
    }

    cout << ans1 + 1 << " " << ans2 + 1 << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int  tt; cin >> tt;
    while(tt--) solve();
    return 0;
}