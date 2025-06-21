#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool is_prime(ll num){
    if(num < 2) return false;
    if(num < 4) return true;
    if(num % 2 == 0 || num % 3 == 0)
	return false;
    for(ll i = 5; (i * i)  <= num; i += 6){
	if(num % i == 0 || (num % (i+2)) == 0) { return false; }
    }
    return true;
}

int main(){

    ll t; cin >> t;
    while(t--){
        ll n, k; cin >> n >> k;
        if(n > 1 && k > 1){ cout << "no\n"; continue; }
        if(n == 1 && k == 2){cout << "yes\n"; continue; }
        if(k == 1 && is_prime(n)){cout << "yes\n"; continue; }
	cout << "no\n";
    }  
    return 0;
}

