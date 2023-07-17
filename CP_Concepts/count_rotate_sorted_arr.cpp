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

int rotateCount_binsearch(vector<int> v, int x)
{
    // return lower_bound(v.begin(), v.end(), x) - v.begin();
    vector<int>::iterator itr = find(v.begin(), v.end(), x);
    int index = distance(v.begin(), itr);
    return index;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int p;
        cin >> p;
        v.push_back(p);
    }

    int x = *min_element(v.begin(), v.end());
    int ans = rotateCount_binsearch(v, 2);
    cout << "RotateCount : " << ans + 1 << nl;
    return 0;
}

//input
// 6
// 8 7 5 2 3 4

// here 8 7 5 are rotate thats why ans is 3