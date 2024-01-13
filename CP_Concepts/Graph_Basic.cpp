// //Take input adjacency matrix :

// #include<bits/stdc++.h>
// using namespace std;

// #define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

// const int mx = 1e3+123;
// int adjMat[mx][mx];

// int main()
// {
//     optimize();
    
//     int n;
//     cin >> n;
    
//     for ( int i = 1; i <= n; i++ ) {
//         for ( int j = 1; j <= n; j++ ) cin >> adjMat[i][j];
//     }
//     return 0;
// }


// //Take input 2D grids :
// #include<bits/stdc++.h>
// using namespace std;

// #define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

// const int mx = 1e3+123;
// char adjMat[mx][mx];

// /// adjMat[i][j] means there is a edge between i and j node.

// int main()
// {
//     optimize();

//     int n, m;
//     cin >> n >> m;

//     for ( int i = 1; i <= n; i++ ) {
//         for ( int j = 1; j <= m; j++ ) cin >> adjMat[i][j];
//     }
//     return 0;
// }



// //Take input adjacency list (unweighted ) :

#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int mx = 1e5+123;

vector<int> adj[mx];

int main()
{
    optimize();

    int n, m;
    cin >> n >> m;

    for ( int i = 1; i <= m; i++ ) {
        int u, v;
        cin >> u >> v;

        adj[u].push_back ( v );
        adj[v].push_back ( u ); /// remove this line for weighted graph
    }

    for ( int i = 1; i <= n; i++ ) {
        cout << "Adjacent nodes of node " << i << " : ";
        for ( auto u : adj[i] ) {
            cout << u << " ";
        }
        cout << endl;
    }


    return 0;
}
//input 
// 4 3
// 1 2
// 2 4
// 2 3


//output

// Adjacent nodes of node 1 : 2 
// Adjacent nodes of node 2 : 1 4 3 
// Adjacent nodes of node 3 : 2 
// Adjacent nodes of node 4 : 2


// //Take input adjacency list ( weighted ) :

// #include<bits/stdc++.h>
// using namespace std;

// #define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

// const int mx = 1e5+123;

// vector<pair<int, int>> adj[mx];

// int main()
// {
//     optimize();

//     int n, m;
//     cin >> n >> m;

//     for ( int i = 1; i <= m; i++ ) {
//         int u, v, w;
//         cin >> u >> v >> w;

//         adj[u].push_back ( {v, w} );
//         adj[v].push_back ( {u, w} ); /// remove this line for undirected graph
//     }

//     for ( int i = 1; i <= n; i++ ) {
//         cout << "Adjacent nodes of node " << i << " : \n";
//         for ( auto u : adj[i] ) {
//             cout << "Node : " << u.first << " " << "Weight : " << u.second << endl;
//         }
//         cout << endl << endl;
//     }

//     return 0;
// }