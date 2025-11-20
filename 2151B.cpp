#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n, m, a, b = 1; cin >> n >> m;
        string s; cin >> s;
        set<int> st; for(int i = 0; i < m; i++) cin >> a, st.insert(a);
        for(int i = 0; i < n; i++){
            if(s[i] == 'A') st.insert(++b);
            else {
                b++;
                while(st.count(b)) b++;
                st.insert(b);
                while(st.count(b)) b++;
            }
        }
        cout << st.size() << '\n';
        for(const int& x : st) cout << x << ' ';
        cout << endl;
    }
}