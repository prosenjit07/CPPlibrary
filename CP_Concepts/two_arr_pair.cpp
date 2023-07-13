// binary search
//two pointer
#include <bits/stdc++.h>
using namespace std;

void solve(int ar[], int br[], int n, int m, int x)
{
    int ind1, ind2, l, r;
    l = 0;
    r = m - 1;
    int dif = INT_MAX;
    while (l < n && r >= 0)
    {
        int sum = ar[l] + br[r];
        if (abs(sum - x) < dif)
        {
            ind1 = l;
            ind2 = r;
            dif = abs(sum - x);
        }
        if (sum > x)
            r--;
        else
            l++;
    }
    cout << "( " << ar[ind1] << " , " << br[ind2] << " ) = " << ar[ind1] + br[ind2] << endl;
}
int main()
{
    int n, m, x;
    cin >> n;
    int ar[n + 3];
    for (int i = 0; i < n; i++)
        cin >> ar[i];

    cin >> m;
    int br[m + 3];
    for (int i = 0; i < m; i++)
        cin >> br[i];

    cin >> x;

    solve(ar, br, n, m, x);
}
