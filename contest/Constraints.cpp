#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

    int t, n, a, x;

    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[n][2];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin >> arr[i][j];
            }
        }
        int  min=arr[0][1];
        for (int i = 0; i < n; i++)
        {
            if (arr[i][0] == 2)
            {
                min=arr[i][1];
            }
        }
    }
}