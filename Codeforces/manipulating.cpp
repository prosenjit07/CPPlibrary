// rat:1700
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

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<char, int> mp;
        for (int i = 0; i <= 2 * n; i++)
        {
            string s;
            cin >> s;
            for (int j = 0; j < s.size(); j++)
                mp[s[j]]++;
        }
        char ans;
        for (auto it : mp)
        {
            if (it.second % 2 == 1)
            {
                ans = it.first;
                break;
            }
        }
        cout << ans << endl;
    }
}
