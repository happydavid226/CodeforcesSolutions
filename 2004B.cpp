#include <bits/stdc++.h>
#define int long long
using namespace std;

int tt, l, r, L, R, ans;

void solve(){
    ans = 0;
    cin >> l >> r >> L >> R;
    if(r < L || R < l) { cout << 1 << "\n"; return; }
    
    if(L == l && r == R){
	cout << R - L << "\n";
	return;
    }
    if(L == l){
	cout << (min(r, R) - L) + 1 << "\n";
	return;
    }
    if(r == R){	
	cout << (R - (max(L, l))) + 1 << "\n";
        return;
    }
    cout << (min(R, r) - max(l, L)) + 2 << "\n";
    
}


int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> tt; while(tt--) solve();
    return 0;
}

/*

00000l00L00R0r0: 2
00000L00l00r0R0: 2
* 00000l00r00L00R: 1
* 00000L00R00l00r: 1
00000L00l00R00r: 2 + (R - l)
00000l00L00r00R: 2 + (r - L)


1 2 3 4 5 6 7 8 9 10
  l     r
  L     R




*/