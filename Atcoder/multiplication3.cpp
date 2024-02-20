#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    int n;
    cin >> n;
    ll int arr[n];
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 0)
            x = 1;
    }
    if (x == 1)
    {
        cout << 0 << endl;
    }
    else
    {
        ll int a, b, p, c;
        p = 1e18;
        ll int ans = 1;
        for (int i = 0; i < n; i++)
        {
            if (ans <= p / arr[i])
            {
                ans *= arr[i];
            }
            else
            {
                ans = -1;
                break;
            }
        }
        cout << ans << endl;
    }
}
