#include <bits/stdc++.h>
using namespace std;

bool compx(tuple<int,int,int> a, tuple<int,int,int> b){
    int from , to, from1, to1;
    from = get<1>(a);
    to = get<1>(b);
    from1 = get<2>(a);
    to1 = get<2>(b);

    if(from == to){
        return from1 < to1;
    }
    return from < to;

}
bool compy(tuple<int,int,int> a, tuple<int,int,int> b){
    int from , to, from1, to1;
    from = get<1>(a);
    to = get<1>(b);
    from1 = get<2>(a);
    to1 = get<2>(b);

    if(from1 == to1){
        return from < to;
    }
    return from1 < to1;

}

void solve(){
    int n; cin >> n;

    vector<tuple<int,int,int>> a;
    for(int i = 0; i < n; i++){
        int from, to;
        cin >> from >> to;
        a.push_back({i+1, from , to});
    }
    sort(a.begin(), a.end(), compx);
    sort(a.begin(), a.begin() + n / 2, compy);
    sort(a.begin() + n / 2, a.end(), compy);

    int l = 0, r = n - 1;
    while(l < r){
        cout << get<0>(a[l]) << ' ' << get<0>(a[r]) << '\n';
        l++;
        r--;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt; cin >> tt; while(tt--) solve();
    return 0;
}