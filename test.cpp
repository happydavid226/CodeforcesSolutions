#include <bits/stdc++.h>
using namespace std;

const int N = 5;

// Function to check if the given edge list forms a connected graph
bool isConnected(const vector<pair<int, int>>& edges) {
    vector<vector<int>> adj(N);
    for (auto [u, v] : edges) {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<bool> visited(N, false);
    queue<int> q;
    q.push(0);
    visited[0] = true;

    while (!q.empty()) {
        int node = q.front(); q.pop();
        for (int nei : adj[node]) {
            if (!visited[nei]) {
                visited[nei] = true;
                q.push(nei);
            }
        }
    }

    return all_of(visited.begin(), visited.end(), [](bool x) { return x; });
}

// Function to generate all connected graphs with 5 nodes
vector<vector<pair<int, int>>> generateAllConnectedGraphs() {
    vector<pair<int, int>> allEdges;

    // Generate all possible undirected edges for 5 nodes
    for (int i = 0; i < N; ++i)
        for (int j = i + 1; j < N; ++j)
            allEdges.emplace_back(i, j);

    int total = 1 << allEdges.size(); // 2^10 = 1024 subsets
    vector<vector<pair<int, int>>> connectedGraphs;

    for (int mask = 0; mask < total; ++mask) {
        vector<pair<int, int>> currentEdges;
        for (int i = 0; i < (int)allEdges.size(); ++i) {
            if (mask & (1 << i))
                currentEdges.push_back(allEdges[i]);
        }

        // A connected graph must have at least (N-1) edges
        if ((int)currentEdges.size() < N - 1)
            continue;

        if (isConnected(currentEdges))
            connectedGraphs.push_back(currentEdges);
    }

    return connectedGraphs;
}
 void solve(){
    int n, m;
    
 }