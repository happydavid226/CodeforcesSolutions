#include <iostream>
#include <vector>
#include <cstdint>
#define pii pair<int,int>
#define vi vector<int>
#define vb vector<bool> 
#define ll long long
#define ull unsigned long long int
#define rep(i, a, n) for(int i = (a); i < (n); i++)
#define rop(i, n , a) for(int i = (n); i >= (a); i--)
using namespace std;

vector<vi> adj, mat;

void solve(){
    int n, q;
    cin >> n >> q;
    ll ans = 0;
    adj.assign(n, {});  mat.assign(n, vi(n)); vi c(n-1), colors(n);
    rep(i, 0, n) cin >> colors[i];
    rep(i, 0, n-1){
        int from, to;
        cin >> from >> to >> c[i]; from--; to--;
        adj[from].push_back(to); adj[to].push_back(from);
        mat[from][to] = c[i];
        mat[to][from] = c[i];
        if(colors[to] != colors[from]){
            ans += (ll) c[i];
        }
    }
    rep(i, 0, q){
        int vertex, color; cin >> vertex >> color; vertex--;
        if(colors[vertex] == color){
            cout << ans << '\n';
            continue;
        }
        colors[vertex] = color;
        for(const int& x : adj[vertex]){
            if(colors[x] == colors[vertex]){
                ans -= mat[vertex][x];
            } else {
                ans += mat[vertex][x];
            }
        }
        cout << ans << '\n';
    }
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt = 1; 
    cin >> tt; 
    while(tt--) solve();
    return 0;
}