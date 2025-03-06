#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string input;
    cin >> input;
    if(input.size() < 26){
        cout << "NO";
        return 0;
    }

    set <char> results;

    for(int i = 0; i < input.size(); i++){
        results.insert(tolower(input[i]));
    }
    if(results.size() >= 26) cout << "YES";
    else cout << "NO";
    return 0;
}