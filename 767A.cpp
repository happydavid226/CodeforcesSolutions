#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	
	set<int> st;

	int m = n;
	for(int i = 0; i < n; i++){
		if(a[i] == m){
			cout << m << ' ';
			m--;
			
			while(st.count(m)){
				cout << m << ' ';
				st.erase(m);
				m--;
			}
			cout << '\n';
		} else {
			cout << '\n';
			st.insert(a[i]);
		}
	}

	return 0;	
}