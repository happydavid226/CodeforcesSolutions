#include <bits/stdc++.h>
using namespace std;

bool is_bad(vector<int>& a){
    int n = a.size();
    for(int i = 0; i + 4 < n; i++){
        if(a[i] > a[i+1] && a[i+1] > a[i+2] && a[i+2] > a[i+3] && a[i+3] > a[i+4]){
            return true;
        }
        if(a[i] < a[i+1] && a[i+1] < a[i+2] && a[i+2] < a[i+3] && a[i+3] < a[i+4]){
            return true;
        }
    }
    return false;
}

void solve(){
    int n;
    cin >> n;

    deque<int> d1, d2;
    vector<int> q1, q2;
    string s1, s2; s1.resize(n); s2.resize(n);

    for(int i = 0; i < n; i++){
        int data; cin >> data;
        d1.push_back(data);
        d2.push_back(data);
    }

    bool state = false;
    int prev = d1.back(); d1.pop_back();
    int curr = d1.back(); d1.pop_back();
    s1[0] = 'R';
    s1[1] = 'R';
    q1.push_back(prev);
    q1.push_back(curr);

    if(prev < curr) state = true;
    int i = 2;
    while(!d1.empty()){
        if(state){
            if(d1.front() > curr){
                prev = curr;
                curr = d1.front();
                d1.pop_front();
                q1.push_back(curr);
                state = !state;
                s1[i++] = 'L';
            } else if(d1.back() > curr){
                prev = curr;
                curr = d1.back();
                d1.pop_back();
                q1.push_back(curr);
                state = !state;
                s1[i++] = 'R';
            } else {
                if(d1.front() < d1.back()){
                    prev = curr;
                    curr = d1.front();
                    d1.pop_front();
                    q1.push_back(curr);
                    state = !state;
                    s1[i++] = 'L';
                } else {
                    prev = curr;
                    curr = d1.back();
                    d1.pop_back();
                    q1.push_back(curr);
                    state = !state;
                    s1[i++] = 'R';
                }
            }
        } else {
            if(d1.front() < curr){
                prev = curr;
                curr = d1.front();
                d1.pop_front();
                q1.push_back(curr);
                state = !state;
                s1[i++] = 'L';
            } else if(d1.back() < curr){
                prev = curr;
                curr = d1.back();
                d1.pop_back();
                q1.push_back(curr);
                state = !state;
                s1[i++] = 'R';
            } else {
                if(d1.front() > d1.back()){
                    prev = curr;
                    curr = d1.front();
                    d1.pop_front();
                    q1.push_back(curr);
                    state = !state;
                    s1[i++] = 'L';
                } else {
                    prev = curr;
                    curr = d1.back();
                    d1.pop_back();
                    q1.push_back(curr);
                    state = !state;
                    s1[i++] = 'R';
                }
            }
        }
    }

    state = false;
    prev = d2.front(); d2.pop_front();
    curr = d2.front(); d2.pop_front();
    q2.push_back(prev);
    q2.push_back(curr);
    s2[0] = 'L';
    s2[1] = 'L';

    if(prev < curr) state = true;
    i = 2;
    while(!d2.empty()){
        if(state){
            if(d2.front() > curr){
                prev = curr;
                curr = d2.front();
                d2.pop_front();
                q2.push_back(curr);
                state = !state;
                s2[i++] = 'L';
            } else if(d2.back() > curr){
                prev = curr;
                curr = d2.back();
                d2.pop_back();
                q2.push_back(curr);
                state = !state;
                s2[i++] = 'R';
            } else {
                if(d2.front() < d2.back()){
                    prev = curr;
                    curr = d2.front();
                    d2.pop_front();
                    q2.push_back(curr);
                    state = !state;
                    s2[i++] = 'L';
                } else {
                    prev = curr;
                    curr = d2.back();
                    d2.pop_back();
                    q2.push_back(curr);
                    state = !state;
                    s2[i++] = 'R';
                }
            }
        } else {
            if(d2.front() < curr){
                prev = curr;
                curr = d2.front();
                d2.pop_front();
                q2.push_back(curr);
                state = !state;
                s2[i++] = 'L';
            } else if(d2.back() < curr){
                prev = curr;
                curr = d2.back();
                d2.pop_back();
                q2.push_back(curr);
                state = !state;
                s2[i++] = 'R';
            } else {
                if(d2.front() > d2.back()){
                    prev = curr;
                    curr = d2.front();
                    d2.pop_front();
                    q2.push_back(curr);
                    state = !state;
                    s2[i++] = 'L';
                } else {
                    prev = curr;
                    curr = d2.back();
                    d2.pop_back();
                    q2.push_back(curr);
                    state = !state;
                    s2[i++] = 'R';
                }
            }
        }
    }
    if(!is_bad(q1)){
        cout << s1 << '\n';
    } else {
        cout << s2 << '\n';
    }    
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt; cin >> tt; while(tt--) solve();
    return 0;
}