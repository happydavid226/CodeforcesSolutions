#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
	int n; cin >> n;
        vector<int> A(n), B(n);
        for(int i = 0; i < n; i++) cin >> A[i];
        for(int i = 0; i < n; i++) cin >> B[i];
        
	int wrong = 0,  diff, goodIndex;
        for(int i = 0; i < n; i++){
	    if(A[i] < B[i]) {wrong++; diff = B[i] - A[i]; goodIndex = i; }
        }
        if(wrong > 1 ){ cout << "no\n"; continue; }
        if(wrong == 0){ cout << "yes\n"; continue; }
        bool flag = true;
        for(int i = 0; i < n; i++){
	    if(i != goodIndex && A[i] - B[i] < diff){
		flag = false;
                break;
            }
        }
        if(flag){ cout << "yes\n"; }
	else cout << "no\n"; 
    }
    return 0;
}