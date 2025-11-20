#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt; 
    cin >> tt;
    while(tt--){
        int a, b, n;
        cin >> a >> b >> n;

        if(a <= b || b <= (a/n)){
            cout << 1 << '\n';
        } else {
            cout << 2 << '\n';
        }

    }
}