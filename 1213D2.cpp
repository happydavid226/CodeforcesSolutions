#include <bits/stdc++.h>
using namespace std;
vector<int> adj[200005];
int main(){
    int n, k;  cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        int x = a[i], ops = 0;
        while(x > 0){
            adj[x].push_back(ops);
            x >>=1;
            ops++;
        }
        adj[x].push_back(ops);
    }
    int min_ans = 10000000;;
    for(int i = 0; i <= 200000; i++){
        int ans = 0;
        sort(adj[i].begin(), adj[i].end());
        if(adj[i].size() >= k){
            for(int j = 0; j < k; j++) ans += adj[i][j];
            min_ans = min(min_ans, ans);
        }
    }
    cout << min_ans << '\n';
    return 0;
}