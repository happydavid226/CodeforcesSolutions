#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int counter = 0; 
    for(int i = 0; i < n; i++)
    {
        int num1, num2;
        cin >> num1 >> num2;
        if(num2 - num1 > 1) counter++;
    }
    cout << counter;
    return 0;
}