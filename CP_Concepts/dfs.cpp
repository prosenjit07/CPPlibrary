#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

// Using an ordered set from the Policy-Based Data Structures (PBDS) library
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>

// Fast input/output
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

vector<int> v[1002]; // An array of vectors to store adjacency list of each node
int vis[1003];       // An array to mark visited nodes

void DFS(int node)
{
    vis[node] = 1;          // Mark the current node as visited
    cout << node << " -> "; // Print the current node
    int len = v[node].size();
    for (int i = 0; i < len; i++)
    {
        int child = v[node][i]; // Get the child node
        if (vis[child] == 0)    // If the child is not visited
        {
            DFS(child); // Recursively call DFS on the child node
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m; // Input the number of nodes (n) and edges (m)
    while (m--)
    {
        int x, y;
        cin >> x >> y;     // Input an edge between node x and node y
        v[x].push_back(y); // Add y to the adjacency list of x
        v[y].push_back(x); // Add x to the adjacency list of y (since it's an undirected graph)
    }
    DFS(1); // Start DFS from node 1
}

/*
Input
5 5
0 1
0 2 
0 3
1 2
2 4
3 3
4 4
*/
