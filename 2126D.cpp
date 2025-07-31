#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int pos , l, r, real;

    Node(int left, int right, int cost){
        l = left;
        r = right;
        real = cost;
    }
};
bool comp(Node a, Node b){
    return a.real < b.real;
}

bool reachable(int ans , Node b){
    return (ans <= b.r && ans >= b.l);
}


void solve(){
    int n, k;
    cin >> n >> k;
    queue<Node> Reachable;
    vector<Node> G;

    for(int i = 0; i < n; i++){
        int l, r, real; cin >> l >> r >> real;
        Node newNode(l, r, real);
        newNode.pos = i;
        G.push_back(newNode);
    }
    sort(G.begin(), G.end(), comp);
    int ans = k;
    Node start(0,0,k);
    vector<bool> visited(n, false);
    for(int i = 0; i < n; i++){
        if(reachable(ans, G[i])){
            Reachable.push(G[i]);
            visited[G[i].pos] = true;
            ans = max(ans, G[i].real);
        }
        
    }
    cout << ans << '\n';
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt; cin >> tt; while(tt--) solve();
    return 0;
}