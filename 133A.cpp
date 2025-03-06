#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    set<char> input;
    for(int i = 0; i < s.size(); i++){
        input.insert(s[i]);
    }
    if(input.count('H') || input.count('Q') || input.count('9')){
        cout << "YES";
    }
    else cout << "NO";

    return 0;
}