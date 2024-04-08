#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c, d;
        cin >> n >> c >> d;
        vector<int> v(n * n);
        for (int i = 0; i < n * n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        vector<vector<int>> a(n, vector<int>(n));
        a[0][0] = v[0];
        for (int i = 1; i < n; i++)
        {
            a[0][i] = a[0][i - 1] + c;
        }
        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                a[i][j] = a[i - 1][j] + d;
            }
        }
        vector<int> temp;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                temp.push_back(a[i][j]);
            }
        }
        sort(temp.begin(), temp.end());
        if (temp == v)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}