#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
typedef long long int ll;

ll gethash(string s)
{
    ll ans = 0;
    ll p = 31; //a prime num
    ll power = 1;
    for (char ch : s)
    {
        ans = (ans + (ch - 'a' + 1) * power) % mod; //(ch - 'a' + 1) is the value of the character or use s[i]
        // mod is used for avoid overflow
        power = (power * p) % mod;  //or use power = pow(p,i)
    }
    return ans;
}

int main()
{
    while (1)
    {
        string s;
        cin >> s;
        cout << gethash(s) << '\n';
    }
    return 0;
}