#include <bits/stdc++.h>
using namespace std;

bool check_overlapp_x(int x1, int x2, int a){
	int x3 = min(x1, x2) + a;
	int x4 = max(x1, x2);

	//cout << "x3 is " << x3 << '\n';
	//cout << "x4 is " << x4 << '\n' << '\n';;

	if(x3 > x4) return true;
	return false;
}

bool check_overlapp_y(int y1, int y2, int b){
	int y3 = min(y1, y2) +  b;
	int y4 = max(y1, y2);

	//cout << "y3 is " << y3 << '\n';
	//cout << "y4 is " << y4 << '\n' << '\n';

	if(y3 > y4) return true;
	return false;
}

int check_distance_x(int x1, int x2, int a){
	int x3 = min(x1, x2) + a;
	int x4 = max(x1, x2);
	
	return x4 - x3;
}

int check_distance_y(int y1, int y2, int b){
	int y3 = min(y1, y2) + b;
	int y4 = max(y1, y2);
	
	return y4 - y3;
}


void solve(){
	int w, h, a, b, x1, x2, y1, y2;
	cin >> w >> h >> a >> b >> x1 >> y1 >> x2 >> y2;

	int d1 = check_distance_y(y1, y2, b);
	
	int d2 = check_distance_x(x1, x2, a);

	if(d1 == 0 || d2 == 0){
		cout << "Yes\n";
		return;
	}

	if(check_overlapp_x(x1, x2, a) &&  d1 % b != 0){
		cout << "No\n";
		return;
	}

	if(check_overlapp_y(y1, y2, b) && d2 % a != 0){
		cout << "No\n";
		return;
	}

	if(d1 % b != 0 && d2 % a != 0){
		cout << "No\n";
		return;
	}

	cout << "yes\n";
}



int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int tt; cin >> tt; while(tt--) solve();

	return 0;
}