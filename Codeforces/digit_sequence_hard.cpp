//https://codeforces.com/contest/1177/problem/B

#include<bits/stdc++.h>
using  namespace  std;
#define ll long long
int main()
{
    ll k;
    cin>>k;
    ll n=1,i=1,x=9;
    while(k>x*i)
    {
        k-=(x*i);
        i++;
        n*=10;
        x*=10;
    }
    n += (k-1)/i;
    ll z = (k-1)%i;
    string ans = to_string(n);
    cout<<ans[z]<<endl;
}
