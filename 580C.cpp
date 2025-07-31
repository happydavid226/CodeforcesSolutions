#include <bits/stdc++.h>
using namespace std;

struct Node {
    int node;
    bool is_leaf;
    bool has_cat;
    int num_cats;


    Node(int n, bool is, bool has, int cats){
        node = n;
        is_leaf = is;
        has_cat = has;
        num_cats = cats;
    }
};

vector<int> outdegree;
vector<vector<int>> adj;
vector<bool>visited;
vector<Node> T;
int n , m, ans;

void dfs(){
    stack<Node> stk;
    Node start(0, 0, ((T[0].has_cat) ? true : false), ((T[0].has_cat) ? 1 : 0));
    stk.push(start);
    visited[start.node] = true;

    while(!stk.empty()){
        Node top = stk.top();
        stk.pop();
        
        /* cout << "I am going to explore node " << top.node << '\n'; */
        for(auto x : adj[top.node]){
            /* cout << "its neighbour " << x << '\n'; */
            if(T[top.node].has_cat && T[x].has_cat && !visited[x]){
                /* cout << "we increase cats \n";
                cout << "now it has " << T[x].num_cats << " cats\n"; */
                T[x].num_cats = T[top.node].num_cats+1;
                /* cout << "now it has " << T[x].num_cats << "cats\n"; */
                if(T[x].num_cats > m){
                    /* cout << "num cats gets greater than m\n"; */
                    continue;
                }
            }
            if(!visited[x] && T[x].is_leaf){
                ans++;
                continue;
            }
            if(!visited[x]){
                stk.push(T[x]);
                visited[x] = true;
                /* cout << "we push " << x << " in stack\n"; */
            }
        }
    }
}

int main(){
    cin >> n >> m;
    //init
    outdegree.resize(n);
    adj.resize(n);
    visited.resize(n, false);
    ans = 0;

    for(int i = 0; i < n; i++){
        int cat; cin >> cat;
        Node newNode(i, false, ((cat == 1) ? true : false), ((cat == 1) ? 1 : 0));
        T.push_back(newNode);
    }
    /* cout << "the loop ends\n"; */

    for(int i = 0; i < n - 1; i++){
        int from , to;
        cin >> from >> to;
        from--; to--;
        adj[from].push_back(to);
        adj[to].push_back(from);
        outdegree[from]++;
        outdegree[to]++;
    }
    /* cout << "out degree : "; */
    /* for(int i = 0; i < n; i++){
        cout << outdegree[i] << ' ';
    } */
    /* cout << '\n'; */
    for(int i = 0; i < n; i++){
        if(outdegree[i] == 1){
            T[i].is_leaf = true;
            /* cout << T[i].node << "is a leaf\n"; */
        }
    }

    dfs();
    cout << ans << '\n';

}