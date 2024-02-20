#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        long long ar[n];
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            ar[i] = pow(10, x);
        }
        if (n == 1)
            cout << k + 1 << endl;
        else
        {
            long long ans = 0;
            long long x;
            k++;
            for (int i = 0; i < n - 1; i++)
            {
                if (ar[i + 1] % ar[i] == 0)
                {
                    x = ar[i + 1] / ar[i] - 1;
                }
                else
                    x = ar[i + 1] / ar[i];

                if (x >= k)
                {
                    ans += k * ar[i];
                    k = 0;
                    break;
                }
                else
                {
                    ans += x * ar[i];
                    k -= x;
                }
            }
            if (k != 0) // if notes is still exits
            {
                ans += k * ar[n - 1]; // calculate remainder notes
            }
            cout << ans << endl;
        }
    }
}