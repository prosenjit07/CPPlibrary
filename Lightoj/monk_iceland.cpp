// https://www.hackerearth.com/practice/algorithms/graphs/breadth-first-search/practice-problems/algorithm/monk-and-the-islands
#include <bits/stdc++.h>
using namespace std;

const int mx = 1e4+123;
int lev[mx];
vector<int> adj[mx];

void bfs(int s)
{
    memset(lev, -1, sizeof(lev));
    lev[s] = 0;
    queue<int> q;
    q.push(s);
    while (!q.empty())
    {
        int f = q.front();
        q.pop();
        for (auto v : adj[f])
        {
            if (lev[v] == -1)
            {
                lev[v] = lev[f] + 1;
                q.push(v);
            }
        }
    }
}
int main()
{
    int n, m, t;
    cin >> t;

    while (t--)
    {
        // clear adj after exe one test case
        for (int i = 0; i < mx; i++)
            adj[i].clear();
        cin >> n >> m;
        for (int i = 1; i <= m; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        bfs(1);
        cout << lev[n] << endl;
    }
}

