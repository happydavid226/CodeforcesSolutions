#include <bits/stdc++.h>
#define ll long long
#define vll vector<long long>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t; cin >> t;
    vector<string> answers;
    for(ll a = 0; a < t; a++){
        ll n; cin >> n; string s; cin >> s;
        map<char, ll> freq;
        for(ll b = 0; b < n; b++) freq[s[b]]++;
        vector<pair<ll , char>> vm;
        for(auto it : freq) vm.push_back({it.second, it.first});
        sort(vm.begin(), vm.end());
        s[s.find(vm[0].second)] = vm.back().second;
        answers.push_back(s);              
    }
        for(auto &answer : answers) cout << answer << "\n";
    return 0;
}