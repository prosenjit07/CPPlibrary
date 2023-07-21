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

vector<int>v[1000];
int vis[10000],dis[10000];

void dfs(int node,int d)
{
    vis[node]=1;
    dis[node]=d;
    for(int child: v[node])
    {
        if(vis[child]==0)
        {
            dfs(child,d+1);
        }
    }
}

int main()
{
    int n,e;
    cin>>n>>e;
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int x;
    cin>>x;
    dfs(x,0);

    for(int i=1;i<=n;i++)
    {
        cout<<x<<" -> "<<i<<" = "<<dis[i]<<endl;
    }
}

/*Input:
7 6
1 2 
1 3
2 4
2 5
3 6
3 7
1
Output:
1 -> 1 = 0
1 -> 2 = 1
1 -> 3 = 1
1 -> 4 = 2
1 -> 5 = 2
1 -> 6 = 2
1 -> 7 = 2
*/