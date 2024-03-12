#include <bits/stdc++.h>
using namespace std;

void phi(int n)
{
    int ans = n;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            int cnt = 0;
            while (n % i == 0)
            {
                n /= i;
                cnt++;
            }
            // cout<<i<<"^"<<cnt<<endl;
            ans *= (i - 1);
            ans /= i;
        }
    }
    if (n > 1) // last n vlaue is also prime
    {
        // cout<<n<<"^"<<1<<endl;
        ans *= n - 1;
        ans /= n;
    }
    cout << ans << endl;
}

int main()
{
    int n;
    cin >> n;
    phi(n);
}