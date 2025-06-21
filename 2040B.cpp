#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    int t; cin >> t;
    while(t--){
        int count, answer;
        count = answer = 1;
	int n; cin >> n;
	while(answer < n){
	   count++;
           answer = (2 * answer) + 2;
        }
        cout << count << "\n";
    }    
}