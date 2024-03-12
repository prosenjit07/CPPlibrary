#include <bits/stdc++.h>
using namespace std;
#define mod 1e7 + 5
// prime factoraization
void fact(long long int n)
{
    long long int ans = 1;
    for (long long int i = 2; i * i <= n; i++)
    {
        int ct = 0;
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                ct++;
                n = n / i;
            }
            cout << i << "^" << ct << endl;
        }
        // cout << "," << endl;
    }
    if (n > 1)
        cout << n << "^" << 1 << endl;
}

int main()
{
    int n;
    cin>>n;
    fact(n);
    return 0;
}
