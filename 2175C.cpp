/*God be with me*/
#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s, t;
    cin >> s >> t;

    int n = s.size();
    int m = t.size();

    sort(t.begin(), t.end());
    map<char,int> cnt_s, cnt_t1;

    for(int i = 0; i < n; i++) cnt_s[s[i]]++;
    for(int i = 0; i < m; i++) cnt_t1[t[i]]++;

    for(int i = 0; i < n; i++){
        if(cnt_s[s[i]] > cnt_t1[s[i]]){
            cout << "Impossible\n";
            return;
        }
    }

    set<char> st;
    for(int i = 0; i < m; i++){
        st.insert(t[i]);
    }
    for(const auto& x : st){
        cnt_t1[x] -= cnt_s[x];
    }

    int l = 0,r = 0;
    while(l < n && r < m){
        while(r < m && l < n && t[r] < s[l]){
            while(cnt_t1[t[r]] > 0){
                cout << t[r];
                cnt_t1[t[r]]--;
            }
            r++;
        }

        int first = l;
        while(l < n && s[l] <= s[first]){
            cout << s[l];
            l++;
        }
    }
    if(l >= n){
        while(r < m){
            while(cnt_t1[t[r]] > 0){
                cout << t[r];
                cnt_t1[t[r]]--;
            }
            r++;
        }
    }
    cout << '\n';
}

int main(){
    int tt;
    cin >> tt;
    while(tt--){
        solve();
    }
}