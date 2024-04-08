// in every row place a queen so that that is not place ant attracking position
// N-Queen Problem
#include <bits/stdc++.h>
using namespace std;

// Function to check if it's safe to place a queen at position (x, y)
bool isSafe(const vector<vector<int>> &board, int x, int y, int n, vector<bool> &col, vector<bool> &leftDiag, vector<bool> &rightDiag)
{
    // Check if the column is already occupied
    // or if there's a queen in the left or right diagonal
    if (col[y] || leftDiag[x + y] || rightDiag[n - 1 - x + y])
        return false;
    return true;
}

// Function to solve the N-Queens problem recursively
bool nQueen(vector<vector<int>> &board, int x, int n, vector<bool> &col, vector<bool> &leftDiag, vector<bool> &rightDiag)
{
    // Base case: if all queens are placed
    if (x >= n)
        return true;

    // Try placing queen in each column of the current row
    for (int y = 0; y < n; y++)
    {
        // Check if it's safe to place a queen at position (x, y)
        if (isSafe(board, x, y, n, col, leftDiag, rightDiag))
        {
            // Place the queen at position (x, y)
            board[x][y] = 1;
            // Mark the column and diagonals as occupied
            col[y] = leftDiag[x + y] = rightDiag[n - 1 - x + y] = true;

            // Recur for the next row
            if (nQueen(board, x + 1, n, col, leftDiag, rightDiag))
                return true;

            // Backtrack: Remove the queen from position (x, y)
            board[x][y] = 0;
            // Mark the column and diagonals as unoccupied
            col[y] = leftDiag[x + y] = rightDiag[n - 1 - x + y] = false;
        }
    }
    // If no solution found for the current row
    return false;
}

int main()
{
    int n;
    cin >> n;

    // Initialize the chessboard as a 2D vector with dimensions n x n
    vector<vector<int>> board(n, vector<int>(n, 0));

    // Arrays to keep track of occupied columns and diagonals
    vector<bool> col(n, false);
    vector<bool> leftDiag(2 * n - 1, false);
    vector<bool> rightDiag(2 * n - 1, false);

    // Solve the N-Queens problem 
    if (nQueen(board, 0, n, col, leftDiag, rightDiag))
    {
        // Print the solution
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}