#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t, n;
    cin >> t;

    while (t--)
    {
        cin >> n;

        vector<pair<int, int>> constraints;

        for (int i = 0; i < n; ++i)
        {
            int a, x;
            cin >> a >> x;
            constraints.push_back({a, x});
        }

        sort(constraints.begin(), constraints.end());

        int count = 0;
        int lower_bound = -1e9;
        int upper_bound = 1e9;

        for (int i = 0; i < n; ++i)
        {
            if (constraints[i].first == 1)
            {
                lower_bound = max(lower_bound, constraints[i].second);
            }
            else if (constraints[i].first == 2)
            {
                upper_bound = min(upper_bound, constraints[i].second);
            }
            else
            {
                count++;
            }
        }

        int result = max(0, upper_bound - lower_bound + 1 - max(0, count - 1));
        cout << result << endl;
    }

    return 0;
}
