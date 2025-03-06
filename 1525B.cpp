#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    vector<int> answers;
    for(int i = 0; i < t; i++){
        int n;
        cin >> n;
        vector<int> inputs;
        for(int j = 0; j < n; j++){
            int num;
            cin >> num;
            inputs.push_back(num);
        }
        int flag = 0;
        int smallest = inputs[0];
        int largest = inputs[0];
        for(int k = 0; k < n-1; k++){
            if(inputs[k] > inputs[k+1]){
                flag += 1;
            }
            if(inputs[k+1] > largest){
                largest = inputs[k+1];
            }
            if(inputs[k+1] < smallest){
                smallest = inputs[k+1];
            }  
        }
        
        if(flag == n - 1) answers.push_back(3);
        else if((smallest == inputs[0] || largest == inputs[n-1]) && flag == 1){
            answers.push_back(1);
        }
        else if((smallest == inputs[0] || smallest == inputs[n-1]) && flag == 0){
            answers.push_back(0);
        }
        else{
            answers.push_back(2);
        }
    }
    
    for(auto& answer : answers) cout << answer << "\n";
    return 0;
        
}