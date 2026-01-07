#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int data, odd = 0, even = 0;
    for(int i = 0; i < n; i++){
        cin >> data;
        if(data&1) odd++;
        else even++;
    }
    cout << min(odd, even) << '\n';
    return 0;
}