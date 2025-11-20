#include <iostream>
#include <set>
#include <vector>
#include <iomanip>
#include <cassert>
using namespace std;

vector<bool> visited;
vector<vector<int>> adj;
vector<int> degree;
vector<int> dist;
set<int> dists;

void dfs(int node){
    visited[node] = true;
    for(const int& x : adj[node]){
        if(!visited[x]){
            dist[x] = dist[node] + 1;
            if(degree[x] == 1) dists.insert(dist[x]);
            else dfs(x);
        }
    }
}

int main(){
    int n;
    cin >> n;
    int m = n;
    visited.assign(n, false);
    adj.assign(n, {});
    degree.assign(n, 0);
    dist.assign(n, 0);

    for(int i = 1; i < n; i++){
        int u, v;
        cin >> u >> v;
        u--; v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
        degree[u]++;
        degree[v]++;
    }
    dfs(0);
    n = dists.size();
    long long  sum = 0; 
    for(const int& x : dists){
        sum += x;
    } 
    cout << fixed << setprecision(15) << ((long double) sum / (long double) n ) << '\n';
    return 0;
}
