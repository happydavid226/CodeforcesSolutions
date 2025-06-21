#include <bits/stdc++.h>
using namespace std;

int  n, x;
vector<int> a;

void solve(){

    cin >>  n >> x;
    a.resize(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int first_closed =-1, last_closed = -1;

    for(int i = 0; i <n; i++){
        if(a[i] == 1){
            first_closed = i;
            break;
        }
    }

    for(int i = n-1; i >= 0; i--){
        if(a[i] == 1){
            last_closed = i;
            break;
        }
    }

    if(first_closed == -1){
        cout << "Yes\n";
        return;
    }

    if(last_closed - first_closed + 1 <= x){
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt; cin >> tt; while(tt--) solve();
    return 0;
}