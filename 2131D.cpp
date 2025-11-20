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

vector<vi> adj;

void solve(){
    int n;
    cin >> n;
    adj.assign(n, {});

    rep(i, 0, n-1){
        int to , from;
        cin >> from >> to;
        from--; to--;
        adj[from].push_back(to);
        adj[to].push_back(from);
    }
    if(n == 2){
        cout << 0 << '\n';
        return;
    }
    int ans = 0;
    rep(i, 0, n){
        if(adj[i].size() == 1) ans++;
    }
    int mx_cnt = 0;
    rep(i, 0, n){
        int cnt = 0;
        rep(j, 0, (int) adj[i].size()){
            if(adj[adj[i][j]].size() == 1){
                cnt++;
            }
        }
        mx_cnt = max(mx_cnt, cnt);
    }
    cout << ans - mx_cnt << '\n';
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt = 1; 
    cin >> tt; 
    while(tt--) solve();
    return 0;
}