#include <bits/stdc++.h>
#define int long long
using namespace std;

bool comp(pair<int,int> a, pair<int,int> b){
    if(a.first == b.first) return a.second < b.second;
    else return a.first < b.first;
}

void solve(){
    int n; 
    cin >> n;
    vector<pair<int,int>> p(n);
    for(int i = 0; i < n; i++) cin >> p[i].first >> p[i].second;

    sort(p.begin(), p.end(), comp);
    int ans = 0;
    for(int i = 0; i < n - 1; i++){
        if(p[i].first == p[i+1].first){
            ans += n - 2;
        }
    }
    

    vector<pair<int,int>> up, down;
    for(int i = 0; i < n; i++){
        if(p[i].second == 0){
            down.push_back(p[i]);
            //cout << "pushing down\n";
        } else {
            up.push_back(p[i]);
            //cout << "pushing up\n";
        }
    }
    int m = down.size();
    for(int i = 0; i < m - 1; i++){
        if(abs(down[i].first - down[i+1].first) == 2 || (i < m-2 && abs(down[i].first - down[i+2].first) == 2)){
            pair<int,int> t = {down[i].first + 1, 1};
            if(binary_search(up.begin(), up.end(), t)){
                ans++;
            }
        }
    }
    //cout << "loop to push down ended \n";
    m = up.size();
    for(int i = 0; i < m - 1; i++){
        //cout << "loop of up has started\n";
        if(abs(up[i].first - up[i+1].first) == 2  || (i < m - 2 && abs(up[i].first - up[i+2].first) == 2)){
            pair<int, int> t = {up[i].first + 1 , 0};
            if(binary_search(down.begin(), down.end(), t)){
                ans++;
            }
        }
    }
    cout << ans << '\n';
}



int32_t  main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt; cin >> tt; while(tt--) solve();
    return 0;
}