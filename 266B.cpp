#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    string input;
    cin >> input;
    int p = 0;
    
    for(int i = 0; i  < t; i++)
    {
        for(int j = 0; j < n-1; j++)
        {
            if(input[j] == 'B' && input[j+1] == 'G')
            {
                swap(input[j], input[j+1]);
                j++;
            }
        }
    }

        
    cout << input;
    return 0;
}