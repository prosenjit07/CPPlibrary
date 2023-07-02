#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int count1 = 0;
    int count2 = 0;
    int count3 = 0;

    int a[n];
    int b[n];
    int c[n];
    int p = 0;
    int q = 0;
    int r = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            count1++;
            a[p] = i;
            p++;
        }
        else if (arr[i] == 2)
        {
            count2++;
            b[q] = i;
            q++;
        }
        else
        {
            count3++;
            c[r] = i;
            r++;
        }
    }
    int x = min(count1, count2);
    int y = min(x, count3);
    cout << y << endl;

    if (count1 != 0 && count2 != 0 && count3 != 0)
    {
        for (int i = 0; i < y; i++)
        {
            cout << a[i] + 1 << " " << b[i] + 1 << " " << c[i] + 1 << endl;
        }
    }
    return 0;
}
