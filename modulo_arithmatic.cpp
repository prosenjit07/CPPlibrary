#include <bits/stdc++.h>
using namespace std;

const int p = 5, N = 1e5;
int fact[N];
int addm(int x, int y)
{
    return (x + y) % p;
}

int subm(int x, int y)
{
    return ((x - y) % p + p) % p;
}

int mulm(long long int x, long long int y)
{
    return ((x * y)) % p;
}

int powrm(int x, int y)
{
    int res = 1;
    while (y)
    {
        if (y & 1)
            res = mulm(res, x);
        y /= 2;
        x = mulm(x, x);
    }
    return res;
}

int divm(int x, int y)
{
    return mulm(x, powrm(y, p - 2));
}

void calculate_factorials()
{
    fact[0] = 1;
    for (int i = 1; i < N; i++)
    {
        fact[i] = mulm(fact[i - 1], i);
    }
}

int inv(int x)
{
    return powrm(x, p - 2);
}

int ncr(int n, int r)
{
    return mulm(mulm(fact[n], inv(fact[r])), inv(fact[n - r]));
}
int main()
{

    cout << addm(3, 5) << endl;
    cout << subm(-3, 5) << endl;
    cout << mulm(324, 234) << endl;
    cout << divm(56, 2) << endl;
    calculate_factorials();
    cout << fact[5]; // if p=7 ans= 1
    cout << ncr(5, 2) << endl;
    cout << ncr(5778, 123) << endl;
    return 0;
}
