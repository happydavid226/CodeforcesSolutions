#include <bits/stdc++.h>
using namespace std;
bool is_found(const string& s, const string& b){
    for(int i = 0; i < b.size()-1; i++){
        if(b[i] == s[0] && b[i+1] == s[1]) return true;
    }
    return false;
}
int n;
int main(){
    cin >> n;
    string a = "abc";
    string s, t; cin >> s >> t;
    vector<string> results;
    do {
        string x = string(n,a[0]) + string(n,a[1]) + string(n,a[2]);
        string y = "";
        for(int i = 0; i < n; i++) y += a;
        results.push_back(x);
        results.push_back(y);
    } while(next_permutation(a.begin(), a.end()));
    cout << "YES\n";
    for(const string& cand : results){
        if(!is_found(s, cand) && !is_found(t,cand)){
            cout << cand << '\n';
            return 0;
        }
    }
    return 0;
}