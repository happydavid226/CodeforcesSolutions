#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n, a;
        cin >> n >> a;

        int data;
        int x = 0;
        int r = 0;
        for(int i = 0; i < n; i++){
            cin >> data;
            if(data < a){
                x++;
            }
            if(data == a)
                r++;
        }
        int y = n - x - r;
        if(x > y){
            cout << a-1 << '\n';
        } else if(x <= y){
            cout << a+1 << '\n';
        }
    }
}