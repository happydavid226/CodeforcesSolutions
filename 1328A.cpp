#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    vector<int> results;
    for(int i = 0; i < t; i++){
        int a, b;
        cin >> a >> b;
        int di = (a + b - 1) / b;
        int mul = di * b;
        results.push_back(mul - a);
        
    }
    for(auto& result : results) cout << result << "\n";
    return 0;
}