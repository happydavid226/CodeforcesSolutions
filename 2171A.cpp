#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt; 
    cin >> tt; 
    while(tt--){
        int n;
        cin >> n;
        if(n % 4 == 2 || n % 4 == 0){
            cout << (n/4)+1 << endl;
        } else {
            cout << 0 << endl;
        }
    }
}