#include <bits/stdc++.h>
using namespace std;

int main(){
    string input1;
    string input2;
   
    cin >> input1;
    cin >> input2;

    vector<int> result;
    for(int n = 0; n < input1.size(); n++){
        if(input1[n] == input2[n]){
            result.push_back(0);
        }
        else result.push_back(1);
    }

    for(auto res : result) cout << res;
    return 0;
}