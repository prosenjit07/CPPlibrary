#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

int main()
{
    Faster;
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, xk, yk, xq, yq;
        cin >> a >> b >> xk >> yk >> xq >> yq;

        vector<ll> dx = {-a, -a, a, a, b, b, -b, -b};
        vector<ll> dy = {-b, b, b, -b, a, -a, a, -a};

        set<pair<ll, ll>> dexK;
        set<pair<ll, ll>> dexQ;

        for (int i = 0; i < 8; i++)
        {
            dexK.insert({xk + dx[i], yk + dy[i]});
        }
        for (int i = 0; i < 8; i++)
        {
            dexQ.insert({xq + dx[i], yq + dy[i]});
        }

        int ans = 0;

        for (auto i : dexK)
        {
            // if find king pair to queen pair is not end of the queen
            // that mean it is similar pair value
            if (dexQ.find(i) != dexQ.end())
            {
                ans++;
            }
        }

        cout << ans << endl;
    }
    return 0;
}
