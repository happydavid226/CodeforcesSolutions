#include <iostream>
#include <vector>
#include <algorithm>
using ll = long long;
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    ll sum = 0LL;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.rbegin(), a.rend());
    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            sum += a[i];
        }
    }
    cout << sum << '\n';

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt = 1;
    cin >> tt; while(tt--) solve();
    return 0;
}