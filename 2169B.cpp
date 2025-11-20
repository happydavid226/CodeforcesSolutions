/*
    Uwiteka ni we mana yonyine
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt; 
    cin >> tt;
    while(tt--){
        string s;
        cin >> s;
        int n = s.size();

        int cl, cr; cl = cr = 0;
        
        if(n == 1){
            cout << 1 << '\n';
            continue;
        }

        bool flag = false;
        int ans = 0;

        for(int i = 0; i < n-1; i++){
            if(i == n-2){
                if(s[i+1] == '<'){
                    cl++;
                } else if(s[i+1] == '>'){
                    cr++;
                } else {
                    ans = 1;
                }
            }
            if((s[i] == '*' && s[i+1] == '*') || (s[i] == '>' && s[i+1] == '*') || (s[i] == '*' && s[i+1] == '<') || (s[i] == '>' && s[i+1] == '<')){
                cout << -1 << endl;
                flag = true;
                break;
            }
            if(s[i] == '<') cl++;
            if(s[i] == '>') cr++;
            if(s[i] == '*') ans = 1;
        }
        if(flag) continue;
        cout << (ans + (max(cl, cr))) << '\n';
    }
}