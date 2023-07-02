#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < k; i++)
    {
        cout << char(i + 97);
    }
    int j = 0;
    if ((n - k) > k)
    {
        for (int i = 0; i < (n - k); i++)
        {
            if (i % 2 == 0)
            {
                cout << char(97 + j);
                j++;
            }
            else
            {
                cout << char(97 + 1);
                j--;
            }
        }
    }
    else
    {
        for (int i = 0; i < (n - k); i++)
        {
            cout << char(i + 97);
        }
    }
    return 0;
}
