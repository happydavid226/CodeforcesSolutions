#include <bits/stdc++.h>
#define int long long
using namespace std;

int llmax(int a, int b){
    return (a > b ? a : b);
}

int llmin(int a, int b){
    return (a > b ? b : a);
}

int32_t main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        int data, sum = 0, cnt_non_zero = 0;
        for(int i = 0; i < n; i++){
            cin >> data;
            sum += data;
            if(data){
                cnt_non_zero++;
            }
        }
        cout << llmax(1, llmin(cnt_non_zero, sum - n + 1)) << endl;
    }
}