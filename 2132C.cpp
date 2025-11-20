#include <iostream>
#include <stack>
using ll = long long;
using namespace std;

ll binexp(ll n){
    ll base = 3LL;
    ll ans = 1LL;
    while(n > 0){
        if(n&1){
            ans *= base;
        }
        base *= base;
        n >>= 1;
    }
    return ans;
}

ll change_to_base_3(ll n){
    stack<ll> st;
    while(n > 0LL){
        st.push(n % 3);
        n /= 3;
    }
    ll ans = 0;
    while(!st.empty()){
        ans *= 10LL;
        ans += st.top();
        st.pop();
    }
    return ans;
}

ll calc(ll pos){
    if(pos == 0LL) return 3;
    return binexp(pos+1) + (pos * binexp(pos-1));
}

void solve(){
    ll n; cin >> n;
    n = change_to_base_3(n);
    //cout << "in base three n is " << n << endl;
    ll ans = 0;
    ll i = 0;
    while(n > 0){
        ans += calc(i) * (n % 10);
        n /= 10;
        i++;
    }
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt; cin >> tt; while(tt--) solve();
    return 0;
}