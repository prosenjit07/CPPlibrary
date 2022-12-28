#include <bits/stdc++.h>
using namespace std;
int cost[10][10], i, j, k, n, stk[10], top, v, visit[10], visited[10];
int main()
{
    int m;
    cout << "Enter no of vertices:";
    cin >> n;
    cout << "Enter no of edges:";
    cin >> m;
    cout << "\nEDGES \n";
    for (k = 1; k <= m; k++)
    {
        cin >> i >> j;
        cost[i][j] = 1;
    }
    cout << "Enter initial vertex to traverse from:";
    cin >> v;
    cout << "DFS ORDER OF VISITED VERTICES:";
    cout << v << " ";
    visited[v] = 1;
    k = 1;
    while (k < n)
    {
        for (j = n; j >= 1; j--)
            if (cost[v][j] != 0 && visited[j] != 1 && visit[j] != 1)
            {
                visit[j] = 1;
                stk[top] = j;
                top++;
            }
        v = stk[--top];
        cout << v << " ";
        k++;
        visit[v] = 0;
        visited[v] = 1;
    }
    return 0;
}
/*
Output:
Enter no of vertices:4
Enter no of edges:4

EDGES
1 2
1 3
2 4
3 4
Enter initial vertex to traverse from:1
DFS ORDER OF VISITED VERTICES:1 2 4 3
*/