// https://lightoj.com/problem/guilty-prince
#include <bits/stdc++.h>
using namespace std;
const int N = 30;

int n, m;

bool vis[N][N];
char g[N][N];
int ct;

int dx[] = {-1, +1, 0, 0};
int dy[] = {0, 0, -1, +1};

void dfs(int x, int y)
{
    vis[x][y] = 1;
    ct++;
    for (int i = 0; i < 4; i++)
    {
        int x1 = x + dx[i];
        int y1 = y + dy[i];
        //cout<<x<<"x "<<y<<" y "<<endl;

        if (x1 >= 1 && x1 <= n && y1 >= 1 && y1 <= m && g[x1][y1] == '.' && !vis[x1][y1])
        {
            dfs(x1, y1);
        } 
    }
}

int main()
{
    int t;
    cin >> t;
    int x, y;
    for (int i = 1; i <= t; i++)
    {

        cin >> m >> n;
        for (int j = 1; j <= n; j++)
        {
            for (int k = 1; k <= m; k++)
            {
                cin >> g[j][k];
                // price pos store
                if (g[j][k] == '@')
                {
                    x = j;
                    y = k;
                    //cout << "x " << x << " y " << y << endl;
                }
            }
        }
        memset(vis, 0, sizeof(vis));
        ct = 0;
        dfs(x, y);
        cout << "Case " << i << ": " << ct << endl;
    }

    return 0;
}
