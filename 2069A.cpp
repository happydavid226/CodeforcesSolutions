#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    vector<string> answer;
    
    for(int m = 0; m < t; m++){
        int n;
        cin >> n;

        vector<int> input(n);
        for(int i = 0; i < n; i++) cin >> input[i];


        map <int , string> flag_answer = { {1, "Yes"}, {0, "no"}};
        int flag = 1;
        for(int b = 0; b < n-2; b++){
            if(input[b] == '1' && input[b+2] ==  '0' && input [b+5] == '1'){
                flag = 0;
                break;
            }
        } 
        answer.push_back(flag_answer[flag]);
    }
    for(auto ans : answer)
        cout << ans << '\n';
    return 0;
    
}