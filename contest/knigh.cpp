#include <bits/stdc++.h>
using namespace std;

int main()
{
    while (1)
    {
        int n, m;
        cin >> n >> m;
        if (n == 0 && m == 0)
        {
            break;
        }
        else
        {
            vector<int> v1(n);
            vector<int> v2(m);
            for (int i = 0; i < n; i++)
            {
                cin >> v1[i];
            }
            for (int i = 0; i < m; i++)
            {
                cin >> v2[i];
            }
            sort(v1.begin(), v1.end());
            sort(v2.begin(), v2.end());
            int ct = 0;
            int sum = 0;
            int j = 0;
            for (int i = 0; i < n; i++)
            {

                while (j < m && v2[j] < v1[i])
                {
                    j++;
                }
                if (j == m)
                {

                    break;
                }
                ct++;
                sum += v2[j];
                j++;
            }
            if (ct == n)
            {
                cout << sum << endl;
            }
            else
            {
                cout << "Loowater is doomed!" << endl;
            }
        }
    }
    return 0;
}
