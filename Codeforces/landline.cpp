#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            cout << abs(a[1] - a[0]) << " " << abs(a[n - 1] - a[i]) << endl;
            continue;
        }
        if (i == n - 1)
        {
            cout << abs(a[n - 1] - a[n - 2]) << " " << abs(a[n - 1] - a[0]) << endl;
            continue;
        }
        cout << min(abs(a[i] - a[i - 1]), abs(a[i] - a[i + 1])) << " " << max(abs(a[i] - a[0]), abs(a[i] - a[n - 1])) << endl;
    }
}