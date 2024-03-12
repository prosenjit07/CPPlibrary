#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define mod 1000000007
typedef long long int ll;
typedef unsigned long long int  llu;

ll power(ll base, ll n)
{
    ll result = 1;
    while (n)
    {
        if (n % 2 == 1)
        {
            result *= base;
            n--;
        }
        else
        {
            base *= base;
            n /= 2;
        }
    }
    return result;
}

ll primefact(int n)
{
    ll res = 1;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            int cnt = 0;
            while (n % i == 0)
            {
                cnt++;
                n = n / i;
                // cout<<"kd"<<nl;
            }
            // cout<<i<<"^"<<cnt<<",";
            res *= ((power(i, cnt + 1) - 1) / (i - 1));
        }
    }
    if (n > 1)
    {
        res *= ((power(n, 2) - 1) / (n - 1));
        // cout<<n<<"^"<<1<<nl;
    }

    return res;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll x, a, b;
        cin >> x >> a >> b;
        ll z = x * b;
        // cout << primefact(3) << endl;
        if (z % a == 0 && primefact(z / a) == x)
            cout << z / a << endl;
        else
            cout << -1 << endl;
    }
}
