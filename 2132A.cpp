#include <iostream>
#include <stack>
#include <queue>
using namespace std;

void solve(){
    int n, m;
    string a,b , c;
    cin >> n >> a >> m >> b >> c;
    stack<char> s1;
    queue<char>s2;
    for(int i = 0; i < m; i++){
        if(c[i] == 'V'){
            s1.push(b[i]);
        } else {
            s2.push(b[i]);
        }
    }
    while(!s1.empty()){
        cout << s1.top();
        s1.pop();
    }
    cout << a;
    while(!s2.empty()){
        cout << s2.front();
        s2.pop();
    }
    cout << '\n';
}

int main(){
    int tt; cin >> tt; while(tt--) solve();
    return 0;
}