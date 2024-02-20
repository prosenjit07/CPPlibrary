// https://codeforces.com/contest/1352/problem/F

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        int arr[x + y + z + 1];
        vector<int> v;
        if (x > 0)
        {
            for (int i = 0; i < (x + 1); i++)
            {
                // arr[i] = 0;
                v.push_back(0);
            }
        }
        if (x > 0 && y > 0)
        {
            int a = 0;
            int b = 1;
            for (int i = x; i < (y + x); i++)
            {
                // arr[i] = b;
                swap(b, a);
                v.push_back(a);
            }
        }
        else
        {
            int a = 0;
            int b = 1;
            for (int i = x; i < (y + x + 1); i++)
            {
                // arr[i] = b;
                swap(b, a);
                v.push_back(a);
            }
        }

        if (v[v.size() - 1] == 1)
        {
            for (int i = 0; i < z; i++)
            {
                v.push_back(1);
            }
        }
        else
        {
            for (int i = 0; i < z + 1; i++)
            {
                v.push_back(1);
            }
        }

        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << "";
        }
        cout << endl;
    }

    return 0;
}