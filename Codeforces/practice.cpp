#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    map<int, int> freq;
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        freq[a[i]]++;
    }

    int ans = 0;
    for (auto x : freq)
    {
        cout << x.first << " " << x.second << endl;
    }
}

int32_t main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}