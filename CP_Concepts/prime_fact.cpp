#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void primefact(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            int cnt = 0;
            while (n % i == 0)
            {
                cnt++;
                n = n / i;
            }
            cout << i << "^" << cnt << ",";
        }
    }
    if (n > 1)
        cout << n << "^" << 1 << nl;
    else
        cout << nl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        primefact(n);
    }
    return 0;
}
