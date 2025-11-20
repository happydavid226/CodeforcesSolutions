#include <iostream>
#include <vector>
#include <cstdint>
#include <set>
#include <unordered_set>
#include <algorithm>
#define pii pair<int,int>
#define vi vector<int>
#define vb vector<bool> 
#define ll long long
#define ull unsigned long long int
#define rep(i, a, n) for(int i = (a); i < (n); i++)
#define rop(i, n , a) for(int i = (n); i >= (a); i--)
using namespace std;

const int maxn = 200000;
set<int> unvis;
unordered_set<int> adj[maxn];
int sz[maxn];
int cur;

void dfs(int x){
    sz[cur]++;
    auto it = unvis.begin();
    while(it != unvis.end()){
        if(adj[x].count(*it)){
            it++;
        } else {
            int last = *it;
            unvis.erase(it);
            dfs(last);
            it = unvis.upper_bound(last);
        }
    }
}


void solve(){
    int n, m;
    cin >> n >> m;
    rep(i, 0, m){
        int from, to;
        cin >> from >> to;
        from--;
        to--;
        adj[from].insert(to);
        adj[to].insert(from);
    }
    rep(i, 0, n) unvis.insert(i);
    cur = 0;
    rep(i, 0, n){
        auto it = unvis.find(i);
        if(it != unvis.end()){
            unvis.erase(it);
            dfs(i);
            cur++;
        }
    }
    cout << (cur) << '\n';
    sort(sz, sz+cur);
    rep(i, 0, cur){
        cout << sz[i] << ' ';
    }
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt = 1; 
    //cin >> tt; 
    while(tt--) solve();
    return 0;
}