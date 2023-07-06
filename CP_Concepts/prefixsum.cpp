#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n+1];
    for(int i=0;i<n;i++)cin>>ar[i];

    int pre[n+1];
    pre[0]=ar[0];

    for(int i=1;i<n;i++)
    {
        pre[i]=pre[i-1]+ar[i];
    }

    int q;
    cin>>q;
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        if(l==0)cout<<pre[r]<<endl;
        else cout<<pre[r]-pre[l-1]<<endl;
    }
}
