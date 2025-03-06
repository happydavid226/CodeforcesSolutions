#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> input(n+1);
    vector<int> result(n+1);
    for(int i = 1; i <= n; i++)
    {
        int num;
        cin >> num;
        input[i] = num;
        result[num]= i;
    }

    for(int i = 1; i <= n; i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}