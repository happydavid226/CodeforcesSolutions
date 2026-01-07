#include <bits/stdc++.h>
using namespace std;
string max_xor;
int max_l,max_r,good_pos;
string f(const string& a, const string& c){
    string d = "";
    int i = 0,n = a.size();
    while(i < good_pos) d += a[i++];
    for(;i<n;i++) d += (a[i] == c[i-good_pos] ? '0' : '1');
    return d;
}
int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        string s; cin >> s;
        int n = s.size();
        max_xor = s;
        max_l = 1, max_r = n, good_pos = -1;
        for(int i = 0; i < n; i++){
            if(s[i] == '0'){good_pos = i; break; }
        }
        
        if(good_pos == -1){cout << "1 " << n << " 1 1\n"; continue; }
        
        for(int i = 0; i < n; i++){
            if(s[i] == '1' && i <= good_pos){
                string d = s.substr(i,n-good_pos);
                //if(i == 0) {cerr << "good d is " << d << '\n' << "Its xor is " << f(s,d) << '\n';; }
                string x = f(s,d);
                //cerr << "x is " << x << '\n';
                //cerr << "l is " << i << " r is " << i+n-good_pos-1 << '\n';
                if(x > max_xor){
                    max_xor = x;
                    max_l = i;
                    max_r = i+n-good_pos-1;
                }
            }
        }
        cout << "1 " << n << ' ' << max_l+1 << " " << max_r+1 << '\n';
    }
    return 0;
}