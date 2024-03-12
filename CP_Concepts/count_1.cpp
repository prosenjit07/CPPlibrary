#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type, less<int>, rb_tre1e_tag, tree_order_statistics_node_update>

#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

#define sq(x) (x) * (x)
#define PI acos(-1.0)
#define all(x) x.begin(), x.end()
#define nl '\n'

typedef long long int ll;
typedef unsigned long long int llu;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, cnt = 0;
        cin >> n;
        while (n > 0)
        {
            cnt++;
            n = n & (n - 1);
        }
        cout << cnt << nl;
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, cnt = 0, cnt2 = 0;
//         cin >> n;
//         for (int i = 0; i < 32; i++) // int long long use 64
//         {
//             if ((n & (1 << i)) != 0)
//             {
//                 cnt++;
//             }
//             else
//             {
//                 cnt2++;
//             }
//         }
//         cout << "Num of 1: " << cnt << endl;
//         // cout<<"  Num of 0: " << cnt2 << endl;
//     }
// }