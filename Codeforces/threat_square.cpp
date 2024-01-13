#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll int n, m, a;
    cin >> n >> m >> a;

    ll x = ceil(float(n) / float(a));
    ll y = ceil(float(m - a) / float(a));
    ll z = ceil(float(n) / float(a));
    // cout << x << z << endl;
    cout << x + (y * z) << endl;
    return 0;
}
