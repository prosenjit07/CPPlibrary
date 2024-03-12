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

set<ll>s;

void countDivisors(ll n)
{
    for (ll i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
                ll x=i;
                ll y=n/i;
                s.insert(x);
                s.insert(y);
        }
    }
}

int main()
{
    ll n,k;
    cin>>n>>k;
    countDivisors(n);
    vector<ll>v;
    v.assign(s.begin(),s.end());
    if(k>v.size())cout<<-1<<endl;
    else cout<<v[k-1]<<endl;
}

