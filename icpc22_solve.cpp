#include <stdio.h>
#include <math.h>
#define ll long long
#define mod 1000000007
#define eps 1e-6

ll l, w;

void test()
{
    long double low = l / 2;
    long double high = l;

    long double ans = l + w;

    for (int i = 0; i < 1000; i++)
    {

        long double mid = (low + high) / 2.0;

        long double lem = mid - eps;
        long double rim = mid + eps;

        long double dis = sqrt((mid) * (mid) - (l - mid) * (l - mid));
        long double dis1 = sqrt((lem) * (lem) - (l - lem) * (l - lem));
        long double dis2 = sqrt((rim) * (rim) - (l - rim) * (l - rim));

        long double total = w - dis + mid + mid;
        long double total1 = w - dis1 + lem + lem;
        long double total2 = w - dis2 + rim + rim;

        if (total1 < total)
        {
            ans = w - dis1 + lem + lem;
            high = mid;
        }
        else if (total2 < total)
        {
            ans = w - dis2 + rim + rim;
            low = mid;
        }
        else
        {
            ans = w - dis + mid + mid;
        }
    }

    printf("%.4Lf\n", ans);
}

int main()
{

    while (scanf("%lld %lld", &l, &w))
    {
        if (l == 0 && w == 0)
        {
            break;
        }

        test();
    }

    return 0;
}
///////////////////////////////////////////
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mod 1000000007

using namespace std;
#define SZ 1000001
ll n;
string s;
vector<int> adjlst[SZ];
bool visited[SZ];

ll ans;
int XX = 0;

const int BASE[] = {1231, 1567};
const int MOD[] = {1000000000 + 7, 1000000000 + 9};
ll HASH[SZ], POW[SZ];
ll RHASH[SZ];

void init(ll x)
{
    for (int i = 0; i <= x; i++)
    {
        adjlst[i].clear();
        visited[i] = 0;
    }

    ans = 0;
}

ll get_hash(ll left, ll right)
{
    ll ans;

    ll len = (right - left + 1);
    ll ret = (HASH[right] - HASH[left - 1] * POW[len]) % MOD[0];
    if (ret < 0)
        ret += MOD[0];
    ans = ret;

    return ans;
}

ll rev_hash(ll left, ll right)
{
    ll ans;

    ll len = (right - left + 1);
    ll ret = (RHASH[right] - RHASH[left - 1] * POW[len]) % MOD[0];
    if (ret < 0)
        ret += MOD[0];
    ans = ret;

    return ans;
}

string ss;

void dfs(ll x, ll len)
{
    visited[x] = 1;

    // hash

    ll p = (HASH[len - 1] * BASE[0] + (s[x] - 'a' + 1)) % MOD[0];

    HASH[len] = p;

    p = ((s[x] - 'a' + 1) * POW[len - 1] + RHASH[len - 1]) % MOD[0];

    RHASH[len] = p;

    // cout<<x<<" -- "<<ss<<endl;

    if (len % 2 == 0)
    {
        if (rev_hash(1, len / 2) == get_hash(len / 2 + 1, len))
        {
            ans++;
            // cout<<x<<" ------------"<<endl;
        }
    }
    else
    {
        if (rev_hash(1, len / 2) == get_hash((len + 1) / 2 + 1, len))
        {
            ans++;
            // cout<<x<<" ------------"<<endl;
        }
    }

    for (auto i : adjlst[x])
    {
        if (!visited[i])
        {
            ss += s[i];
            dfs(i, len + 1);
            ss.pop_back();
        }
    }
}

void test()
{

    cin >> n;
    init(n);
    cin >> s;
    s = "*" + s;

    for (int i = 0; i < n - 1; i++)
    {
        ll x, y;
        cin >> x >> y;

        adjlst[x].pb(y);
        adjlst[y].pb(x);
    }
    ss = "";
    ss += s[1];
    dfs(1, 1);

    ll g = __gcd(ans, n);

    cout << "Case " << ++XX << ": " << ans / g << "/" << n / g << endl;
}

void pre()
{
    POW[0] = POW[1] = 1;
    for (int b = 0; b < 1; b++)
    {
        for (int j = 1; j < SZ; j++)
        {
            ll x = (POW[j - 1] * BASE[b]) % MOD[b];
            POW[j] = x;
        }
    }
    HASH[0] = 0;
    RHASH[0] = 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    pre();
    ll t = 0;
    cin >> t;
    while (t--)
        test();

    return 0;
}
//////////////////////////////////////////
#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007

ll m = 0;

void test()
{
    ll a, b, c, k;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &k);
    ll s = a + b + c;

    if (s % 3 == 0)
    {
        ll n = s / 3;

        if (abs(a - n) % k == 0 && abs(b - n) % k == 0 && abs(c - n) % k == 0)
        {
            printf("Case %lld: Peaceful\n", ++m);
        }
        else
            printf("Case %lld: Fight\n", ++m);
    }
    else
        printf("Case %lld: Fight\n", ++m);
}

int main()
{
 
    ll t = 1;
    scanf("%lld", &t);
    while (t--)
        test();

    return 0;
}