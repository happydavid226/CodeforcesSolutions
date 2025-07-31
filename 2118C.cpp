#include <bits/stdc++.h>
#define int unsigned long long
using namespace std;

//find first zero
int find_first_zero(int a){
    int b = a;
    int pos = 0;
    while(a > 0){
        if(!(a & 1)){
            return pos;
        }
        a >>= 1;
        pos++;
    }
    //if(b == 1){
        //cout << "for one we have " <<  pos << '\n';
    //}
    return pos;
}

struct Comp{
    bool operator()(int a, int b){
        int a0 = find_first_zero(a);
        int b0 = find_first_zero(b);
        if(a0 == b0){
            return a > b;
        } else {
            return a0 > b0;
        }
    }
};

// find_number_of operations
int find_num_operations(int a){
    int pos = find_first_zero(a);
    return (1ULL << pos);
}
int find_beauty(int a){
    int ans = 0;
    while(a > 0){
        if(a & 1){
            ans++;
        }
        a >>= 1;
    }
    return ans;
}

void solve(){
    int n, k, ans = 0;
    cin >> n >> k;
    priority_queue<int, vector<int>, Comp> pq;

    for(int i = 0; i <n; i++){
        int data;
        cin >> data;
        //cout << " the first zero of " << data << " is a t" << find_first_zero(data) << '\n';
        pq.push(data);
        //cout << "the number of operations needed for " << data << " is " << find_num_operations(data) << '\n';
    }
    //while(!pq.empty()) cout << pq.top() << '\n', pq.pop();
    //return;
    int d = 0;
    while(k > 0){
        int top = pq.top();
        //cout << "top before is " << top << '\n';
        pq.pop();
        int y = find_num_operations(top);
        //cout << "the number of operations needed are " << y << '\n';
        if(k >= y){
            k -= y;
            //cout << "after reducing k becomes " << k << '\n';
            top += y;
        } else {
            //cout << "k is not enough\n";
            pq.push(top);
            break;
        }
        pq.push(top);
        //cout << "top after is " <<top << '\n';
        d++;
        //cout << '\n' << '\n' <<'\n';
        //if(d == 36)
            //return;
    }
    //return;
    while(!pq.empty()){
        ans += find_beauty(pq.top());
        pq.pop();
    }
    cout << ans << '\n';
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt; cin >> tt; while(tt--) solve();
    return 0;
}