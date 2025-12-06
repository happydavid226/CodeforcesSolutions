#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; string s;
    cin >> n >> s;
    int cnt_a = 0, cnt_b = 0;
    //count a's and b's
    for(int i =0 ; i < n; i++){
        if(s[i] == 'a') cnt_a++;
        else cnt_b++;
    }

    //pretend to remove all characters at the first
    char a = s[0];
    int i = 0;
    int cur_a = 0, cur_b = 0;
    while(i < n && s[i] == a){
        i++;
    }
    if(a == 'a'){
        cur_a = i;
    } else {
        cur_b = i;
    }

    //pretend to remove all characters at the end
    char b = s[n-1];
    int j = n-1;
    while(j >= 0 && s[j] == b){
        j--;
    }

    if(i >= j){
        cout << 0 << endl;
        return;
    }
    long long ans_a = 0LL, ans_b = 0LL, ans = 0LL;
    for(int ii = i; ii <= j; ii++){
        if(s[ii] == 'a'){
            ans_a += min(cur_b, cnt_b - cur_b);
            cur_a++;
        } else {
            ans_b += min(cur_a, cnt_a - cur_a);
            cur_b++;
        }
    }
    ans = min(ans_a, ans_b);
    cout << ans << '\n';
}

int main(){
    int tt;
    cin >> tt;
    while(tt--){
        solve();
    }
    return 0;
}