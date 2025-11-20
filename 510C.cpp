#include <iostream>
#include <vector>
#include <cassert>

using namespace std;
vector<vector<int>> adj;
vector<bool> visited, on_stack;

pair<char,char> find_first_non_equal_chars(string a, string b){
    int n = a.size(), m = b.size();
    for(int i = 0; i < min(n, m); i++){
        if(a[i] != b[i]){
            return {a[i], b[i]};
        }
    }
    if(m < n){
        cout << "Impossible\n";
        exit(0);
    }
    assert(false);
    return {'a', 'b'};
}


int main(){
    int n;
    cin >> n;
    vector<string> input(n);
    for(int i =0 ; i < n; i++){
        cin >> input[i];
    }
    

}