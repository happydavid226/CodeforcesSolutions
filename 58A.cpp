#include <bits/stdc++.h>
#define int long long
using namespace std;


int32_t main(){
    string s; cin >> s;
    int n = s.size();
    vector<bool> visited(5, false);
    string hello = "hello";
    int j = 0;
    int goodIndex = 0;
    for(int i = 0; i < n; i++){
	if(s[i] == 'h'){
	    visited[0] = true;
	    goodIndex = i;
            break;
        }
    }
    j = 1;
    
    for(int i =goodIndex; i < n; i++){
	if(s[i] == hello[j]){
	    visited[j] = visited[j-1];
            j++;
        }
    }
    if(visited[4] == true){
	cout << "YES\n";
    } else {
	cout << "NO\n";
    }
    return 0;    
}