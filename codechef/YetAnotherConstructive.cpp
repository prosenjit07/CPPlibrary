#include<bits/stdc++.h>
using  namespace  std;
#define nl      '\n'

bool prime(int n)
{
    if(n<2)return false;
    if(n<=3)return true;
    if(n%2==0)return false;
    for(int i=3;i*i<=n;i+=2)
    {
        if(n%i==0)return false;
    }
    return true;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll x;
        cin>>x;
        ll a = 0;
        ll c= x;
        ll b = log2(x);
        b=pow(2,b+1)+x;
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
}

