#include <bits/stdc++.h>
using namespace std;

int main(){
	string s; cin >> s;
	int n = s.size();

	bool fl = false;

	for(int i= 0; i < n; i++){
		if(s[i] != '/') fl = true;
	}

	if(!fl){
		cout << '/' << '\n';
		return 0;
	}
	
	queue<char> q;
	for(int i =0 ; i < n; i++){
		q.push(s[i]);
	}
	while(!q.empty()){
		while( !q.empty() && q.front() != '/'){
			cout << q.front();
			q.pop();
		}

		bool flag = false;
		while(!q.empty() && q.front() == '/'){
			flag = true;
			if(q.size() == 1) flag = false;
			q.pop();
			
		}
		if(flag){
			cout << '/';
		}
	}
	cout << '\n';
}