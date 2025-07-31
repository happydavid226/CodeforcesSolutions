#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	n--;

	if(n % 4 == 3){
		cout << "Bob\n";
	} else {
		cout << "Alice\n";
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int tt; cin >> tt; 
	while(tt--) solve();
	return 0;
}