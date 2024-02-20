//https://codeforces.com/profile/prosenjitbiswas983
//rat:1700
#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>

#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

#define sq(x) (x) * (x)
#define PI acos(-1.0)
#define all(x) x.begin(), x.end()
#define nl '\n'
#define mod 1000000007
typedef long long int ll;
typedef unsigned long long int llu;

// PRIME NUMBER TEST//
bool prime(int n)
{
    if (n < 2)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0)
        return false;
    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

// Graph Grid //
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

ll solve(ll ar[], ll n, ll target)
{
    ll odd = 0, even = 0;
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x = target - ar[i];
        sum += x;
        even += x / 2;
        odd += x % 2;
    }
    ll ans = sum / 3 * 2;
    ans += sum % 3;
    return max(odd * 2 - 1, ans);
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll ar[n + 3];
        ll mx = -1;
        for (ll i = 0; i < n; i++)
        {
            cin >> ar[i];
            mx = max(mx, ar[i]);
        }
        ll ans = min(solve(ar, n, mx), solve(ar, n, mx + 1));
        cout << ans << endl;
    }
}
