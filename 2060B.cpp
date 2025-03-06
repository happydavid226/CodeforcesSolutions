#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isValidPermutation(const vector<vector<int>>& cows, const vector<int>& perm) {
    int n = perm.size();
    int pile_top = -1;
    
    for (int round = 0; round < cows[0].size(); ++round) {
        for (int i = 0; i < n; ++i) {
            int cow = perm[i];
            auto it = upper_bound(cows[cow].begin(), cows[cow].end(), pile_top);
            
            if (it != cows[cow].end()) {
                pile_top = *it;
            } else {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, m;
        cin >> n >> m;
        
        vector<vector<int>> cows(n, vector<int>(m));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> cows[i][j];
            }
            sort(cows[i].begin(), cows[i].end());
        }
        
        vector<int> perm(n);
        for (int i = 0; i < n; ++i) {
            perm[i] = i;
        }

        bool found = false;
        do {
            if (isValidPermutation(cows, perm)) {
                for (int i = 0; i < n; ++i) {
                    cout << perm[i] + 1 << " ";
                }
                cout << endl;
                found = true;
                break;
            }
        } while (next_permutation(perm.begin(), perm.end()));
        
        if (!found) {
            cout << -1 << endl;
        }
    }
    
    return 0;
}
