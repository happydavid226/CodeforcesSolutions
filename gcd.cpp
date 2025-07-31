#include <bits/stdc++.h>
using namespace std;
#define int long long

int gcd(int a, int b){
	if(b == 0) return a;
	return gcd(b, a % b);
}

int32_t main(){
	int a= 73080;
	int b = 255780;

	cout << gcd(a, b) << '\n';
	return 0;
}