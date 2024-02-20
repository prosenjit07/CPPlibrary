#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

typedef long long int ll;
typedef unsigned long long int llu;
#define N 101
//i=identity matrix
//arr= mat res
ll ar[N][N], I[N][N];
ll mod = 1000000007;

void mul(ll A[][N], ll B[][N], ll n)
{
    ll i, j, k;
    ll R[n + 1][n + 1];
    //mat mul
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            R[i][j] = 0;
            for (k = 1; k <= n; k++)
            {
                ll x = (A[i][k] * B[k][j]);
                R[i][j] = (R[i][j] + x);
            }
        }
    }
    //copy R mat to A mat
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            A[i][j] = R[i][j];
        }
    }
}

void power(ll A[][N], ll n, ll p)
{
    ll i, j;
    //make identity mat
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i == j)
                I[i][j] = 1;
            else
                I[i][j] = 0;
        }
    }

    while (p!=0)
    {
        if (p % 2 == 1)
        {
            mul(I, A, n);
            p--;
        }
        else
        {
            mul(A, A, n);
            p /= 2;
        }
    }
    //copy identity mat to A mat
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            A[i][j] = I[i][j];
        }
    }
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, p, i, j, k;
        cin >> n >> p;
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n; j++)
            {
                cin >> ar[i][j];
            }
        }
        power(ar, n, p);

        // cout<<"print the answer"<<nl;
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n; j++)
            {
                cout << ar[i][j] << " ";
            }
            cout << nl;
        }
    }
    return 0;
}
