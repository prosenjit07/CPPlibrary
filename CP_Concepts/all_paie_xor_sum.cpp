#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

int main()
{
    faster int n;
    cin >> n;
    int i, ar[n + 1];
    for (i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    int j, ans = 0;
    for (i = 0; i < 31; i++)
    {
        int one = 0, zero = 0;
        for (j = 0; j < n; j++)
        {
            if (ar[j] & (1 << i))
                one++;
            else
                zero++;
        }
        // p refers num of 1
        int p = one * zero;
        ans += (1 << i) * p;
    }
    cout << ans << nl;
}