#include <bits/stdc++.h>
using namespace std;
#define mod 1e7+5

long long int fact(long long int n)
{
    long long int ans = 1;
    for (long long int i = 2; i <= n; i++)
    {
        ans = (ans * i) % mod;
        //cout<<ans<<endl;
    }
    return ans % mod;
}

int main()
{
   cout<<fact(11)<<endl;
    return 0;
}
  