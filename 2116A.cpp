#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt; cin >> tt;
    int a , b, c, d, minG, minF;
    while(tt--){
        cin >> a >> b >> c >> d;
        minG = min(a, c);
        minF = min(b , d);

        if(minG < minF){
            cout << "Flower\n";
        } else {
            cout << "Gellyfish\n";
        }
    }
    return 0;
}
