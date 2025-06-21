#include <bits/stdc++.h>
#define ll long long
using namespace std;

void test(){
    string s; cin >> s;
    map<int, int> df;
    for(int i = 0; i < 10; i++){
	int n = s[i] - '0';
        df[n]++;
    }
    for(int i = 1; i <= 10; i++){
	for(auto& x : df){
	    if(x.first >= 10-i && x.second > 0){
		cout << x.first; 
		
                x.second--;
                break;
            }
        }
    }
    vector<int> R;
    for(auto& x : df){
	while(x.second > 0){
	    cout << x.second;
            x.second--;
        }
    }
    cout << "\n";

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while(t--) test(); return 0;
}