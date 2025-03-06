#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> input(n);
    for(int c = 0; c < n; c++)
    {
        cin >> input[c];
    }
    int result = 0;
    for(int i = 1; i < n; i++)
    {
        if(input[i] != input[i-1]) result++;
    }
    cout << result+1;
}