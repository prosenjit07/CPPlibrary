#include <bits/stdc++.h>
using namespace std;

int main()
{
    // insertion sort
    int n;
    int i, j;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n-1; i++)
    {
        for (j = i + 1; j > 0; j--)
        {
            if (a[j] >= a[j - 1])
            {
                break;
            }
            swap(a[j], a[j - 1]);
        }
    }
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}