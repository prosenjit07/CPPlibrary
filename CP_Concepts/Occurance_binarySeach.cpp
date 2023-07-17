#include<bits/stdc++.h>
using  namespace  std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>

#define faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl      '\n'
 #define mod 1000000007
typedef long long int ll;
typedef unsigned long long int  llu;

int ar[10000];
int n;
int firstoccur_binsearch(int x)
{
    int res=-1;
    int l=0,r=n-1,mid;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(x==ar[mid])
        {
            res=mid;
            r=mid-1;
        }
        else if(x>ar[mid])l=mid+1;
        else r=mid-1;
    }
    return res;
}


int secondOccur_binsearch(int x)
{
    int res=-1;
    int l=0,r=n-1,mid;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(x==ar[mid])
        {
            res=mid;
            l=mid+1;
        }
        else if(x>ar[mid])l=mid+1;
        else r=mid-1;
    }
    return res;
}

int main()
{
    cin>>n;
    for(int i=0;i<n;i++)cin>>ar[i];
    int q;
    cin>>q;
    while(q--)
    {
        int x;
        cin>>x;
        int ans=firstoccur_binsearch(x);
        cout<<"First occur: "<<ans+1<<nl;

        int ans2=secondOccur_binsearch(x);
        cout<<"Second occur: "<<ans2+1<<nl;

        cout<<"Num of Occurance: "<< (ans2-ans)+1 <<endl;
    }
    return 0;
}