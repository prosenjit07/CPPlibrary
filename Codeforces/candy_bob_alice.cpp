//https://codeforces.com/contest/1352/problem/D
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, x;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            v.push_back(x);
        }
        int a = v[0], b = 0;
        int move = 1;
        int ca = a;
        int cb = 0;
        int ma = 0;
        int mb = 0;
        int p = 0, q = 1;
        int flag1 = 0;
        int flag2 = 0;
        while ((p + q) < n)
        {
            while (cb <= ca && p + q < n)
            {
                b += v[n - p - 1];
                cb += v[n - p - 1];
                p++;
                flag1 = 1;
            }
            if (flag1 == 1) {
                move++;
                flag1 = 0; // Reset flag
            }
            // cout << cb << "b eat" << endl;
            ca = 0;
            while (ca <= cb && p + q < n)
            {
                a += v[q];
                ca += v[q];
                q++;
                flag2 = 1;
            }
            if (flag2 == 1) {
                move++;
                flag2 = 0; // Reset flag
            }
            // cout << ca << "a eat" << endl;
            cb = 0;
        }
        cout << move << " " << a << " " << b << endl;
    }
    return 0;
}
