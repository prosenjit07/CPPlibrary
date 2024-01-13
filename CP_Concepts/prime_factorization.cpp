#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);

const int MX = 1e5 + 123;
bitset<MX> is_prime;
vector<int> prime;

void primeGen(int n)
{
    n += 100;
    for (int i = 3; i <= n; i += 2)
        is_prime[i] = 1;

    int sq = sqrt(n);
    for (int i = 3; i <= sq; i += 2)
    {
        if (is_prime[i] == 1)
        {
            for (int j = i * i; j <= n; j += (i + i))
            {
                is_prime[j] = 0;
            }
        }
    }

    is_prime[2] = 1;
    prime.push_back(2);

    for (int i = 3; i <= n; i += 2)
    {
        if (is_prime[i] == 1)
            prime.push_back(i);
    }
}

vector<long long> factorization(long long n)
{
    vector<long long> ret;

    for (auto p : prime)
    {
        if (1LL * p * p > n)
            break;

        if (n % p == 0)
        {
            while (n % p == 0)
            {
                ret.push_back(p);
                n /= p;
            }
        }
    }

    if (n > 1)
        ret.push_back(n);

    return ret;
}

int main()
{
    optimize();

    primeGen(1e5);

    long long n;

    while (cin >> n)
    {
        if (n == 0)
            break;
        vector<long long> ans = factorization(abs(n));

        reverse(ans.begin(), ans.end());
        if (n < 0)
            ans.push_back(-1);
        reverse(ans.begin(), ans.end());

        cout << n << " = " << ans[0];
        for (int i = 1; i < ans.size(); i++)
            cout << " x " << ans[i];
        cout << endl;
    }

    return 0;
}

/*
Input:
36
0
Output:
36 = 2 x 2 x 3 x 3
*/