#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, n, a, f = 1, i;
    vector<string> answers;
    for(cin >> t; t--;){ cin >> n;
        for(i = f = 1; i <= n; i++){ cin >> a;
            if(a <= 2 * max(i - 1, n - i)) f = 0;
        }answers.push_back(f?"Yes":"No");
    }
    for(auto answer : answers) cout << answer << "\n";
    
    return 0;
}
