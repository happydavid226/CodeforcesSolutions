#include <bits/stdc++.h>
using namespace std;

queue<char> make_queue(string a){
    queue<char> s;
    for(int i = 0; i < a.size(); i++){
	s.push(a[i]);
    }
    return s;    
}

bool is_valid(string a, string b){
    int n = a.size();
    int m = b.size();
    if(m < n || m > (n * 2)) return false;
    queue<char> s = make_queue(a);
    queue<char> p = make_queue(b);
 
    while(!s.empty() && !p.empty()){

	int count1 = 0, count2 = 0;
        while(!s.empty() && s.front() == 'R'){
	    count1++;
	    s.pop();
	}

        while(!p.empty() && p.front() == 'R'){
	    count2++;
	    p.pop();
        }

        if(count2 <  count1 || count2 > (count1 * 2)){
	    return false;
	}
        count1 = 0;
	count2 = 0;
        while(!s.empty() && s.front() == 'L'){
	    count1++;
            s.pop();
	}
      
        while(!p.empty() && p.front() == 'L'){
	    count2++;
	    p.pop();
	}
        if(count2 < count1 || count2 > (count1 * 2)) return false;
        
    }
    if(!s.empty() || !p.empty()) return false;
    return true;
}

int main(){
    int t; cin >> t;
    while(t--){
	string a, b; cin >> a >> b;
        if(is_valid(a, b)) cout << "yes\n";
        else cout << "no\n";
    }
    return 0;
}