#include <iostream>
#include <bitset>
#include <vector>
#include <cstring>
using namespace std;

int n, ans[18];
bool taken[18];

bitset<35> isPrime;
vector<int> tmp;
vector<vector<int>> res;

void sieve()
{
    isPrime.set();
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i < 35; i++)
        if (isPrime[i])
            for (int j = i * i; j < 35; j += i)
                isPrime[j] = false;
}

void solve(int idx)
{
    if (idx == n - 1)
    {
        if (isPrime[ans[idx] + ans[0]])
        {
            for (int i = 0; i < n; i++)
            {
                if (i)
                    cout << ' ';
                cout << ans[i];
            }
            cout << endl;
            return;
        }
        else
            return;
    }
    for (int i = 2; i <= n; i++)
    {
        if (!taken[i] && isPrime[ans[idx] + i])
        {
            ans[idx + 1] = i;
            taken[i] = true;
            solve(idx + 1);
            taken[i] = false;
        }
    }
}

int main()
{
    sieve();
    int cs = 1;
    bool newl = false;
    while (cin >> n)
    {
        ans[0] = 1;
        if (newl)
            cout << endl;
        if (!newl)
            newl = true;
        cout << "Case " << cs++ << ':' << endl;
        solve(0);
    }
}