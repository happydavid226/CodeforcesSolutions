#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1 = "I hate", s2 = "I love";
    int n;
    cin >> n;
    for(int i  = 1; i <= n; i++){
        if(i % 2 == 1){
            cout << s1 << " ";
            if(i != n) cout << "that ";
        }
        
        else if(i % 2 == 0){
            cout << s2 << " ";
            if(i != n) cout << "that ";
        }
    
        if(i == n) cout << "it";
    }
    return 0;
}