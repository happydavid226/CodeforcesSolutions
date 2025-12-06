#include <iostream>
#include <vector>
using namespace std;

int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        int ans = 0;
        vector<int> cnt(n+1, 0);
        for(int i = 0; i < n; i++){
            int data;
            cin >> data;
            cnt[data]++;
            if(cnt[data] >= data){
                ans += data;
                cnt[data] = -1000;
            }
        }
        cout << n-ans << endl;
    }
}