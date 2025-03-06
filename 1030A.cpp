#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int flag = 0;
    for(int h = 0; h < n; h++)
    {
        int num;
        cin >> num;
        if(num == 1) flag = 1;
    }

    if(flag == 1) cout << "HARD";
    else cout << "EASY";
    return 0;
}