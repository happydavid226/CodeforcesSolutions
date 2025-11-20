#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>
#include <stack>
#include <queue>
#define vi vector<int>
#define vb vector<bool>
#define pii pair<int,int>
#define rep(i, a, n) for(int i = (a); i < (n); i++)
#define inf 1000000000
using namespace std;
 
vi dist;
vector<vi> adj;
vb visited;
 
void dfs(int start){
    stack<pair<int,int>> st;
    st.push({start, 0});
    visited[start] = true;
 
    while(!st.empty()){
        int node = st.top().first;
        int dis = st.top().second;
        dist[node] = min(dist[node], dis);
        st.pop();
 
        for(const int& x : adj[node]){
            if(!visited[x]){
                st.push({x, dis+1});
                visited[x] = true;
            }
            dist[x] = min(dist[x], dis+1);
        }
    }    
}
 
void bfs(int start){
    queue<pii> q;
    visited[start] = true;
    q.push({start, 0});
 
    while(!q.empty()){
        int node = q.front().first;
        int dis = q.front().second;
        q.pop();
        dist[node] = dis%2;
 
        for(const int& x : adj[node]){
            if(!visited[x]){
                visited[x] = true;
                q.push({x, dis+1});
            }
        }
    }
}
 
void solve(){
    int n, m;
    cin >>n >> m;
 
    adj.assign(n, {});
    visited.assign(n, false);
    dist.assign(n, inf);
 
    rep(i, 0, m){
        int from, to;
        cin >> from >> to;
        adj[--from].push_back(--to);
        adj[to].push_back(from);
    }
 
    bfs(0);
    int count_odd = 0, count_even = 0;
    rep(i, 0, n){
        if(dist[i]){
            count_odd++;
        } else {
            count_even++;
        }
    }
    if(count_odd > count_even){
        cout << count_even << '\n';
        rep(i, 0, n){
            if(!dist[i]){
                cout << (i+1) << ' ';
            }
        }
    } else {
        cout << count_odd << '\n';
        rep(i, 0, n){
            if(dist[i]){
                cout << (i+1) << ' ';
            }
        }
    }
    cout << '\n';
}
 
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int tt; cin >> tt; while(tt--) solve();
    return 0;
}