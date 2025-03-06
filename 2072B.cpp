#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ll  t, n, d, u; cin >> t; vector<ll> answers; string s;
    while(t--){ cin >> n; cin >> s; d = 0; u = 0;
        for(ll i = 1; i <= n; i++){
            if(s[i-1] == '-') d++;
            else u++;
        } ll answer = (d/2) * (d - (d/2)) * u;
        answers.push_back(answer);
    }
    for(auto answer : answers) cout << answer << "\n";
    return 0;
}