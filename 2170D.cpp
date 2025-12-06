#include <bits/stdc++.h>
#define int long long
using namespace std;

int n, num_question_marks, good_is, good_vs, good_ks, potential_vs, potential_kvs, more_negatives;
string s;

int answer_query(int cx, int cv, int ci){
    good_is =     
}

void solve(){
    int q;
    cin >> n >>q >> s;
    num_question_marks = 0;

    for(int i = 0; i < n; i++){
        num_question_marks += (s[i] == '?' ? 1 : 0);
    }

    int streak = 0; bool flag = false;
    for(int i = 0; i < n; i++){
        if(s[i] == '?' && (i != 0) && (s[i-1] != 'X' || s[i-1] != 'V')){
            streak++;
        } else {
            if(streak >= 2){
                more_negatives += streak/2;
                streak = 0;
            }
        }
    }

    for(int i = 0; i < q; i++){
        int cx, cv, ci;
        cin >> cx >> cv >> ci;
        cout << answer_query(cx, cv, ci) << '\n';
    }
}

int main(){
    int tt;
    cin >> tt;
    while(tt--){
        solve();
    }
    return 0;
}
