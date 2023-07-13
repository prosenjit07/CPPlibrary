#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin >> n;
    ll a[n], b[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }

    ll cnt = 0;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            if (a[i] == b[j])
                cnt++;
        }
    }
    cout << cnt << endl;
}