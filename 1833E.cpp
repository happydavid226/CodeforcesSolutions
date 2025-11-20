#include <iostream>
#include <vector>
#include <cstdint>
#include <set>

#define pii pair<int,int>
#define vi vector<int>
#define rep(i, a, n) for(int i = (a); i < (n); i++)
#define rop(i, n , a) for(int i = (n); i >= (a); i--)
#define MAXN 200000
using namespace std;

set<int> adj[MAXN];
vector<bool> visited;

int dfs(int node){
    int ans = 1;
    if(visited[node]) return 0;
    visited[node] = true;
    for(const int& x : adj[node]){
        if(!visited[x]){
            ans += dfs(x);
        }
    }
    return ans;
}

int find_parent(int node , vi& parent){
    if(parent[node] != node){
        parent[node] = find_parent(parent[node], parent);
    }
    return parent[node];
}

void solve(){
    int n;
    cin >> n;
    
    visited.assign(n, false);
    vi parent(n); rep(i, 0, n) parent[i] = i;
    vi rank(n, 0);
    vi a(n);
    rep(i, 0, n) {
        cin >> a[i];
        a[i]--;
        adj[i].insert(a[i]);
        adj[a[i]].insert(i);

        int pi = find_parent(i, parent);
        int pai = find_parent(a[i], parent);
        if(rank[pi] > rank[pai]){
            parent[pai] = pi;
            rank[pi]++;
        } else {
            parent[pi] = pai;
            rank[pai]++;
        }
    }

    int ma = 0, mi;

    rep(i, 0, n){
        if(!visited[i]){
            int num = dfs(i);
            if(num > 1) ma++;
        }
    }
    mi = ma;

    int curr = -1;
    int represent1, represent2;
    
    rep(i, 0, n){
        if(adj[i].size() != 1) continue;
        int pi = find_parent(i, parent);
        rep(j, i+1, n){
          if(adj[j].size() != 1) continue;
          int pj = find_parent(j, parent);
          if(pi == pj) continue;
          mi--;
          if(rank[pi] > rank[pj]){
            rank[pi]++;
            parent[pj] = pi;
          } else {
            rank[pj]++;
            parent[pi] = pj;
          }
          adj[i].insert(j);
          adj[j].insert(i);
          break;
        } 
    }

    cout << max(1, mi) << ' ' << ma << '\n';
    rep(i, 0, n) adj[i].clear();
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt; cin >> tt; while(tt--) solve();
    return 0;
}