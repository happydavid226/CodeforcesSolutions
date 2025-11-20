/*Uwiteka ni we mwungeri wange*/
#include <bits/stdc++.h>
using namespace std;

void printvector(const vector<int>& a){
    int n = a.size();
    for(int i = 0; i < n; i++){
        cout << a[i] << ' ';
    } cout << endl;
}

string solve1(const vector<int>& a, const vector<int>& b){

    //cout << "the vectors are : \n";
    //printvector(a); printvector(b);

    int n = a.size();
    int cnt_ones = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == 1){
            cnt_ones++;
        }
    }
    for(int i =0; i < n; i++){
        if(b[i] == 1){
            cnt_ones++;
        }
    }
    int goodIndex = -1;
    for(int i = 0; i < n; i++){
        if(a[i] != b[i]){
            goodIndex = i;
        }
    }
    if(goodIndex == -1 || cnt_ones % 2 == 0){
        return "tie";
    } else {
        goodIndex++;
        if(goodIndex % 2 == 1){
            return"ajisai";
        } else {
            return"mai";
        }
    }
}

int count_digits(int k){
    assert(k >= 0);
    if(k < 2){
        return 1;
    } else {
        return 1 + count_digits(k >> 1);
    }
}


void solve(){
    int n;
    cin >> n;

    vector<int> a(n), b(n);
    int mx = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        mx = max(mx, a[i]);
    }
    for(int i = 0; i < n; i++){
        cin >> b[i];
        mx = max(mx, b[i]);
    }
    int k = count_digits(mx);
    vector<vector<int>> aa(n, vector<int>(k, 0)), bb(n, vector<int>(k, 0));

    for(int i = 0; i < n; i++){
        int index = k-1;
        while(a[i] > 0){
            aa[i][index] = a[i] % 2;
            a[i] /= 2;
            index--;
        }
    }

    for(int i = 0; i < n; i++){
        int index = k-1;
        while(b[i] > 0){
            bb[i][index] = b[i] % 2;
            b[i] /= 2;
            index--;
        }
    }

    /* cout << "the big vectors are : \n";
    for(int i =0 ; i < n; i++){
        printvector(aa[i]);
    } cout << endl;
    for(int j = 0; j < n; j++){
        printvector(bb[j]);
    } cout << endl; */
    
    for(int i = 0; i < k; i++){
        vector<int> c(n);
        for(int j = 0; j < n; j++){
            c[j] = aa[j][i];
        }
        vector<int> d(n);
        for(int j = 0; j < n; j++){
            d[j] = bb[j][i];
        }
        string s = solve1(c, d);
        if(s == "ajisai"){
            cout << "ajisai\n"; return;
        } else if(s == "mai") {
            cout << s << '\n'; return;
        } else {
            continue;
        }
    }
    cout << "tie\n";
}

int main(){
    int tt;
    cin >> tt;

    while(tt--){
        solve();
    }
}