#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    int flag0 , flag1, flag2, flag3, flag5; flag0 = flag1 = flag2 = flag3 = flag5 = 0;
    int ans = 0;
    for(int i = 0; i < n ;i++){
        int num; cin >> num;
        if(num == 0) flag0++;
        else if(num == 1) flag1++;
        else if(num == 2) flag2++;
        else if(num == 3) flag3++;
        else if(num == 5) flag5++;

        if(flag0 >= 3 && flag2 >= 2 && flag5 >= 1 && flag1 >= 1 && flag3 >= 1){
	    if(ans == 0) ans = i+1;
        }
    }
    cout << ans << "\n";
    
}

int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}