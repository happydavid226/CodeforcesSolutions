#include <bits/stdc++.h>
using namespace std;

void solve(){
     int n, m, k; string s; cin >> n >> m >> k >> s;
     int N = 2e5 + 10;
     int P[n];
     fill(P, P + n, 0);
     int sum, answer, count; sum = answer = count = 0;
     for(int i = 0; i < n ;i++){
	 sum += P[i];
	 if(sum || s[i] == '1'){
	     count = 0;
	 } else {
	     count++;
	     if(count == m){
		 answer++, sum = 1, count = 0;
		 if(i + k < n) P[i+k] = -1;
	     }
	 }
     }
     cout << answer << "\n";
}

int main(){
    int t; cin >> t; while(t--) solve(); return 0;
}