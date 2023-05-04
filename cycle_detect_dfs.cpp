#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 1;
vector<int> graph[N];
bool cycle=false;
int vis[N];

void dfs(int cur, int par)
{
    cout << cur << '\n';
    vis[cur] = 1;
    for (auto x : graph[cur]) // x=child node
    {
        if (!vis[x])
        {
            dfs(x, cur);
        }
        else if (x != par) // it is visited and not equal to parent
        {
            // backedge
            //cout << cur << " " << x << endl;
            cycle=true;
        }
    }
}

int main()
{
    int v, e;
    cin >> v >> e;
    for (int i = 0; i < e; i++)
    {
        int x, y;
        cin >> x >> y;
        // undirected
        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    for (int i = 1; i <= v; i++)
    {
        if (!vis[i])
        {
            dfs(i, 0); // o can't be parents of any node
        }
    }

    if(cycle){
        cout<<"Yes Cycle Found"<<endl;
    }
    else{
        cout<<"No Cycle Found"<<endl;
    }
    return 0;
}