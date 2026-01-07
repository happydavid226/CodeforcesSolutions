#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, p, max_dist, min_dist, ops = 0;
    string s;
    cin >> n >> p >> s;
    p--;
    if(p >= n/2) p = n-p-1;
    vector<int> dist;
    for(int i = 0; i < n/2; i++){
        char x= min(s[i], s[n-i-1]), y= max(s[i], s[n-i-1]);
        if(x != y) ops += min(y-x, 'z'-y + x - 'a'+1), dist.push_back(i-p);
    }
    if(dist.size() == 0) { cout << 0 << '\n'; return 0; }
    if(dist.size() == 1) { cout << (ops + abs(dist[0])) << '\n'; return 0; }
    max_dist = min_dist = dist[0];
    for(int i = 1; i < (int)dist.size(); i++) max_dist = max(dist[i], max_dist), min_dist = min(dist[i], min_dist);
    if(max_dist > 0 && min_dist < 0) cout << (ops+(min(abs(max_dist), abs(min_dist))*2+max(abs(max_dist), abs(min_dist)))) << '\n';
    else cout << (ops+max(abs(min_dist), abs(max_dist))) << '\n';
    //cerr << "ops were " << ops << '\n';
    //cerr << "max_dist was " << max_dist << " and min_dist was " << min_dist << '\n';
    return 0;
}