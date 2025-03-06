#include <bits/stdc++.h>
#define ll long long
#define vll vector<long long>
#define mll map<long long, long long>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    ll t; cin >> t;
    vll answers;
    while(t--){
        ll n, k; cin >> n >> k;
        mll inputs;
        for(ll a = 0; a < n; a++){
             ll num;
             cin >> num;
             inputs[num]++;
        }
        ll answer = 0;
        for(auto &p : inputs ){
            ll num = p.first;
            ll freq = p.second;
            ll complement = k - num;
            
            if(num == complement){
                answer += inputs[num] / 2; 
                inputs[num] = 0;
                continue;
            }
            
            if(inputs.count(complement)){
                answer += min(inputs[num], inputs[complement]);
                inputs[num] = 0;
                inputs[complement] = 0;
            }
        }
        answers.push_back(answer);  
    }
    for(auto answer : answers) cout << answer << "\n";
    return 0;
    
}


