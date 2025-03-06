#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    set <int> inputs;
    for(int a = 1; a <= n; a++){
        inputs.insert(a);
    }   

    int p;
    cin >> p;
     
    while(p--){
        int num;
        cin >> num;
        if(inputs.count(num)) inputs.erase(num);
    } 
    
    int q;
    cin >> q;

    while(q--) {
        int num;
        cin >> num;
        if(inputs.count(num)) inputs.erase(num);
    }

    if(inputs.empty()) cout << "I become the guy.";
    else cout << "Oh, my keyboard!";

    return 0;
}