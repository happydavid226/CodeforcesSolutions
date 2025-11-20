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

ll min_ans(ll n){
    ll ans = 0;
    ll i = 0;
    while(n > 0){
        ans += calc(i) * (n % 10);
        n /= 10;
        i++;
    }
    return ans;
}

ll find_min_operations(ll n){
    ll ans = 0;
    while(n > 0){
        ans += n % 10;
        n /= 10;
    }
    return ans;
}

void solve(){
    ll n, k; cin >> n >> k ;
    ll m = change_to_base_3(n);
    if(k >= n){
        cout << 3 * n << '\n';
        return;
    }
    ll min_operations = find_min_operations(m);
    if(min_operations > k){
        cout << -1 << '\n';
        return;
    }
    if(min_operations == k){
        cout << min_ans(m) << '\n';
        return;
    }
    ll extra = k - min_operations;
    cout << "minimum operations are " << min_operations << endl;
    cout << "extra is " << extra << '\n';
    cout << "m is " << m << '\n';
    ll ans = extra * 3;
    n -= extra;
    m = change_to_base_3(n);
    ans += min_ans(m);    
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt; cin >> tt; while(tt--) solve();
    return 0;
}