#include <bits/stdc++.h>
#define vllvll vector<vector<long long>>
#define vll vector<long long>
#define ll long long
#define vi vector<int>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    ll t; cin >> t;
    vllvll answers(t);
    for(int a = 0; a < t; a++){
        ll n, k; cin >> n >> k;
        deque<ll> outputs(n);
        for(ll i = 0; i < n; i++)  outputs[i] = i+1;
        sort(outputs.rbegin(), outputs.rend());

        
        while(!outputs.empty()){
            ll i = 0;
            while(i < k-1 && !outputs.empty()){
                answers[a].push_back(outputs.front());
                outputs.pop_front();
                i++;
            }
            if(!outputs.empty()){
                answers[a].push_back(outputs.back());
                outputs.pop_back();
            }
        }           
    }
    for(auto p : answers){
        for(int a = 0; a < p.size(); a++){
            cout << p[a] << " ";
        }
        cout << "\n";
    }
    return 0;
}

