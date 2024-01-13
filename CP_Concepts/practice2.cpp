#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int mx = 1e5+123;

vector<pair<int, int>> adj[mx];

int main()
{
    optimize();

    int n, m;
    cin >> n >> m;

    for ( int i = 1; i <= m; i++ ) {
        int u, v, w;
        cin >> u >> v >> w;

        adj[u].push_back ( {v, w} );
        adj[v].push_back ( {u, w} ); /// remove this line for undirected graph
    }

    for ( int i = 1; i <= n; i++ ) {
        cout << "Adjacent nodes of node " << i << " : \n";
        for ( auto u : adj[i] ) {
            cout << "Node : " << u.first << " " << "Weight : " << u.second << endl;
        }
        cout << endl << endl;
    }

    return 0;
}