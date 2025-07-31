#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k; 
    cin >> n >> k;
    k--;

    vector<int> a(n);
    for(int i =0; i < n; i++){
        cin >> a[i];
    }
    int start = a[k];
    /* cout << "start is " << start << '\n'; */
    sort(a.begin(), a.end());
    int needed = a[n-1];
    if(start == needed){
        /* cout << "start is equal to needed\n"; */
        cout << "yes\n";
        /* cout << "\n\n"; */
        return;
    }
    auto it = upper_bound(a.begin(), a.end(), start);
    int i = it - a.begin();

    int water_level = 1;
    for(int j = i; start != needed; j++){
        if(a[j] - start > (start - water_level + 1)){
            /* cout << "a[j] - start is " << (a[j] - start) << "and start - water_level + 1 is " << (start - water_level + 1); */
            cout << "no\n"; return;
        } 
        water_level += a[j] - start;
        start = a[j];
    }
    cout << "yes\n";

}

int main(){
    int tt; cin >> tt; while(tt--) solve();
    return 0;
}