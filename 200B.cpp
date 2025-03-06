#include <bits/stdc++.h>
using namespace std;

int main()
{
    float n;
    cin >> n;
    float total = 0;
    for(int i =  0; i < n; i++)
    {
        float num;
        cin >> num;
        total += num;
    }
    
    float result = total / n;
    cout << result;
}