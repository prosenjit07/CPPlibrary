#include <bits/stdc++.h>
using namespace std;
// #define output array
long long int dp[100000];

int fib(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    if (dp[n] != -1) // if dp[n] is not -1 then it is already calculated
        return dp[n];

    return dp[n] = fib(n - 1) + fib(n - 2); // if dp[n] is -1 then calculate it and store it in dp[n]
}

int main()
{
    int n;
    cin >> n;
    memset(dp, -1, sizeof(dp)); // initialize dp array with -1
    cout << fib(n) << endl;
    return 0;
}
