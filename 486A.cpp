#include <iostream>
#define ll long long
using namespace std;


int main()
{
    ll n;
    cin >> n;
    ll total = 0;
    ll a = 1;
    ll nodd, neven;
    ll n2 = n/2;
    ll n1;
    if(n % 2 == 0)
    {
        nodd = n-1;
        neven = n;
        n1 = n/2;
    }
    else if(n % 2 == 1)
    {
        nodd = n;
        neven = n - 1;
        n1 = (n/2)+1;
    }

    ll totalOdd = (a + nodd)/2* n1;
    ll totalEven = ((a+1) + neven)/2*n2;
    total = totalEven - totalOdd;
    cout << total;
    return 0;
}