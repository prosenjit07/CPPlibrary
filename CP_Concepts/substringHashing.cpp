#include<bits/stdc++.h>
using  namespace  std;

 #define mod 1000000007

 long long int power(long long int prime,int sz)
 {
     long long int ans=1;
     for(int i=1;i<=sz;i++)
     {
         ans=(ans*prime)%mod;
     }
     return ans;
 }

int main()
{
    string s;
    cin>>s;
    int n=s.size();
    long long int ar[n+4];
    long long int prime=7;

    ar[0]=0;

    for(int i=0;i<n;i++)
    {
        ar[i+1]=(((ar[i]*prime)%mod)+s[i])%mod;
    }

    int q;
    cin>>q;
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        int sz=(r-l)+1;
        long long int ans1=ar[r];
        long long int ans2=ar[l-1];
        long long int pw=power(prime,sz);
        ans2=(ans2*pw)%mod;
        long long int ans=ans1-ans2;
        cout<<ans<<endl;
    }
}
