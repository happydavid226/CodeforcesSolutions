#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k,cnt = 0, min_p = 0; cin >> n >> k;
    vector<int> p(n), q(n), posp(n), posq(n);
    for(int i = 0; i < n; i++) cin >> p[i],p[i]--, posp[p[i]] = i;
    for(int i = 0; i < n; i++) cin >> q[i],q[i]--, posq[q[i]] = i;
    string ans(n,'a');
    char cur = 'a';
    for(int i = 0; i < n; i++){
        min_p = max(max(i,min_p),max(posp[q[i]], posq[p[i]]));
        ans[p[i]] = ans[q[i]] = cur;
        if(i == min_p && cur != 122 && i != n-1) cur++;
    }
    if(cur-96 < k) { cout << "NO\n"; }
    else cout << "YES\n" << ans << '\n';
    return 0;
}