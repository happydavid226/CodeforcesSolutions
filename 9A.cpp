#include <iostream>
using namespace std;

int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b, a % b);
}

int main(){
    int mi, a;
    cin >> a;
    mi = a;
    cin >> a;
    mi = max(mi, a);
    a = 6 - mi + 1;
    int b = 6;
    cout << a/gcd(a,b) << '/' << b/gcd(a,b) << '\n';
    return 0;
}