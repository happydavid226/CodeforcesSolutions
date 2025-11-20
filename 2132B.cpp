#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(){
    vector<long long> ans;
    long long n;
    cin >> n;
    long long divisor = 10;
    while(divisor < n){
        long long x = n / (divisor + 1LL);
        if(x * (divisor + 1LL) == n){
            ans.push_back(x);
        }
        divisor *= 10;
    }
    sort(ans.begin(), ans.end());
    cout << ans.size() << '\n';
    for(const long long& an : ans){
        cout << an << ' ';
    }
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt; cin >> tt; while(tt--) solve();
    return 0;
}