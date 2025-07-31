#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }
    vector<pair<int,int>>result;

    int num_operations = 0;
    for(int i =0; i < n; i++){
        for(int j  = 0; j < n - i-1; j++){
            if(a[j] > a[j+1]){
                num_operations++;
                swap(a[j], a[j+1]);
                result.push_back({1, j+1});
            }
        }
    }
    for(int i =0; i < n; i++){
        for(int j  = 0; j < n - i-1; j++){
            if(b[j] > b[j+1]){
                num_operations++;
                swap(b[j], b[j+1]);
                result.push_back({2, j+1});
            }
        }
    }
    for(int i = 0; i < n; i++){
        if(a[i] > b[i]){
            num_operations++;
            swap(a[i], b[i]);
            result.push_back({3, i+1});
        }
    }
    cout << num_operations << '\n';
    for(auto x : result){
        cout << x.first << ' ' << x.second << '\n';
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt; cin >> tt; while(tt--) solve();
    return 0;
}