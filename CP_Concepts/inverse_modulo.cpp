#include<bits/stdc++.h>
using  namespace  std;

int power(int base,int p,int m)
{
    int res=1;
    while(p)
    {
        if(p%2==1)
        {
            res=(res*base)%m;
            p--;
        }
        else{
            base=(base*base)%m;
            p/=2;
        }
    }
    return res%m;
}
int main()
{
    //use Fermet Little Theorm
    int a,b,m;
    cin>>a>>b>>m;  //(a/b)%m
    int x = power(b,m-2,m);
    int ans=(a*x)%m;
    cout<<ans<<endl;
    return 0;
}
