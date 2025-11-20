#include <iostream>
#include <vector>
#include <cstdint>
#include <cassert>
#define pii pair<int,int>
#define vi vector<int>
#define vb vector<bool> 
#define ll long long
#define ull unsigned long long
#define rep(i, a, n) for(int i = (a); i < (n); i++)
#define rop(i, n , a) for(int i = (n); i >= (a); i--)
using namespace std;

void solve(){
    int n;
	cin >> n;
	vi a(n+1); rep(i, 0, n) cin >> a[i+1];

	int diff = a[2] - a[1];
	int numerator = a[1] + (n * diff);
	int denominator = n + 1;
	assert(denominator != 0);

	if((numerator % denominator) != 0){ cout << "no\n"; return; }
	int x = numerator / denominator;

	numerator = a[1] - diff;
	if((numerator % denominator) != 0) {cout << "no\n"; return; }

	int y = numerator / denominator;
	if(x < 0 || y < 0){
		cout << "no\n"; return;
	}
	rep(i, 1, n+1){
		if(a[i] != ((x * i) + (y * (n-i+1)))){
			cout << "no\n"; return;
		}
	}
	cout << "yes\n";
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt = 1; 
    cin >> tt; 
    while(tt--) solve();
    return 0;
}
	