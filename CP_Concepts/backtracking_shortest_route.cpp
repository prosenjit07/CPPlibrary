#include <iostream>
#include <vector>
using namespace std;

// Recursive function to get all routes in a rectangular grid
// that start at cell (i, j) and ends at the last cell (M-1, N-1).
void printPaths(vector<vector<int>> const &mat, vector<int> &route, int i, int j)
{
    // base case
    if (mat.size() == 0)
    {
        return;
    }

    // `M × N` matrix
    int M = mat.size();
    int N = mat[0].size();

    // if the last cell is reached
    if (i == M - 1 && j == N - 1)
    {
        // print the current route
        for (int i : route)
        {
            cout << i << ", ";
        }
        cout << mat[i][j] << endl; 
        return;
    }

    // include current cell in route
    route.push_back(mat[i][j]);

    // move down
    if (i + 1 < M)
    {
        printPaths(mat, route, i + 1, j);
    }

    // move right
    if (j + 1 < N)
    {
        printPaths(mat, route, i, j + 1);
    }

    // move diagonally
    if (i + 1 < M && j + 1 < N)
    {
        printPaths(mat, route, i + 1, j + 1);
    }

    // backtrack
    route.pop_back();
}

// Print all routes in a rectangular grid
void printPaths(vector<vector<int>> const &mat)
{
    // vector to store the current route
    vector<int> route;

    // start from the first cell (0, 0)
    printPaths(mat, route, 0, 0);
}

int main()
{
    vector<vector<int>> mat =
        {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}};

    printPaths(mat);

    return 0;
}

/*
The time complexity of the proposed solution is exponential.

T(M, N) = T(M, N-1) + T(M-1, N) + T(M-1, N-1)
T(M, 1) = M
T(1, N) = N
T(1, 1) = 1
The additional space required by the program is O(M + N).

*/