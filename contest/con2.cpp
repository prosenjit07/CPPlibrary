#include <bits/stdc++.h>
using namespace std;
#define tc    \
    int t;    \
    cin >> t; \
    while (t--)

int main()
{
    tc
    {
        int sum = 0;
        int n;
        cin >> n;
        int arr[3] = {0};
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            arr[x % 3]++; // cout num of remainder 0,1,2
            sum += x % 3;
        }
        if (sum % 3 == 0)
        {
            cout << 0;
        }
        else if (sum % 3 == 1)
        {
            if (arr[1] > 0)
            {
                cout << 1;
            }
            else
            {
                cout << 2;
            }
        }
        else
        {
            cout << 1;
        }
        cout << endl;
    }
}
