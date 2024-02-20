#include <bits/stdc++.h>
using namespace std;
const int mx = 8123;

bool vis[mx];
int a[mx];

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        memset(vis, 0, sizeof(vis)); 
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> a[i];

        for (int i = 1; i <= n; i++)
        {
            int sum = a[i];

            for (int j = i + 1; j <= n; j++)
            {
                sum += a[j];

                if (sum <= n)
                    vis[sum] = 1;
                else
                    break;
            }
        }

        int ans = 0;

        for (int i = 1; i <= n; i++)
        {
            if (vis[a[i]] == 1)
                ans++;
        }

        cout << ans << endl;
    }

    return 0;
}