#include <iostream>
#include <vector>
#include <cstdint>
#define pii pair<int,int>
#define vi vector<int>
#define vb vector<bool> 
#define ll long long
#define ull unsigned long long int
#define rep(i, a, n) for(int i = (a); i < (n); i++)
#define rop(i, n , a) for(int i = (n); i >= (a); i--)
using namespace std;

int find_nearest_left_tree(string & s, int x){
    rop(i, x-1, 0){
        if(s[i] == '#'){
            return (i+1);
        }
    }
    return 0;
}
int find_nearest_right_tree(string & s, int x){
    int n = s.size();
    rep(i, x, n){
        if(s[i] == '#'){
            return i+1;
        }
    }
    return n+1;
}

int find_left_distance(string& s, int x){
    int left_tree = find_nearest_left_tree(s, x);
    //cout << "left tree is " << left_tree << endl;
    return --left_tree;
}
int find_right_distance(string& s, int x){
    int n = s.size();
    int right_tree = find_nearest_right_tree(s, x);
    //cout << "right tree is at " << right_tree << endl;
    return n - right_tree;
}

void solve(){
    int n, x;
    cin >> n >> x;
    string s; cin >> s;

    int left_distance = find_left_distance(s, x);
    int right_distance = find_right_distance(s, x);

    //cout << "left distance is at " << left_distance<< '\n';
    //cout << "right distance is at " << right_distance << endl; 

    int ans = 1;
    if((left_distance == -1 && right_distance == -1) || x == 1 || x == n){
        cout << ans << '\n';
        return;
    } else if(left_distance < right_distance){
        ans = 2;
        s[x-2] = '#';
        //cout << s << endl;
        left_distance = find_left_distance(s, x);
        //cout << "left distance is " << left_distance <<'\n';
        right_distance = find_right_distance(s, x);
        //cout << "right_distance is " << right_distance << '\n';

        ans += min(left_distance, right_distance);
    }   else {
        ans = 2;
        s[x] = '#';
        //cout << s << endl;
        left_distance = find_left_distance(s, x);
        right_distance = find_right_distance(s, x);
        //cout << "left_distance is " << left_distance << endl;
        //cout << "right_distance is " << right_distance << endl;
        ans += min(left_distance, right_distance);
    }
    cout << ans <<'\n';
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt = 1; 
    cin >> tt; 
    while(tt--) solve();
    return 0;
}