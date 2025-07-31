#include <bits/stdc++.h>
using namespace std;
int T,n,a[1010];
int calc(){
	for(int i=2;i<=n;i++)if(abs(a[i]-a[i-1])<=1)return 0;
	for(int i=2;i<n;i++)if((a[i]>a[i-1]&&a[i]>a[i+1])||(a[i]<a[i-1]&&a[i]<a[i+1]))return 1;
	return -1;
}
int main(){
	cin>>T;
	while(T--){
		cin>>n;
		for(int i=1;i<=n;i++)cin>>a[i];
		cout<<calc()<<'\n';
	}
	return 0;
}