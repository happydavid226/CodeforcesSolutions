#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int totalx, totaly, totalz; totalx = totaly= totalz = 0;
    for(int i = 0; i < n; i++){
	int a, b, c; cin >> a >> b >> c;
        totalx += a;
        totaly += b;
        totalz += c;
    }
    if(totalx == 0 && totaly == 0 && totalz == 0) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}