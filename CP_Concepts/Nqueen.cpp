#include <bits/stdc++.h>
using namespace std;

bool isSafe(int **arr, int x, int y, int n)
{
    // for collumn checking
    for (int row = 0; row < x; row++)
    {
        if (arr[row][y] == 1)
        {
            return false;
        }
    }

    // for left diagonal checking
    int row = x;
    int col = y;
    while (row >= 0 && col >= 0)
    {
        if (arr[row][col] == 1)
        {
            return false;
        }
        row--;
        col--;
    }
    // for right diagonal checking
    row = x;
    col = y;
    while (row >= 0 && col < n)
    {
        if (arr[row][col] == 1)
        {
            return false;
        }
        row--;
        col++;
    }
    // if no queen place
    return true;
}

// after we palce a queen in a particular row then we just to next row
// we don't need to check previous column
// that's why not take y
bool nQueen(int **arr, int x, int n)
{
    // if all queen place
    if (x >= n)
    {
        return true;
    }

    for (int col = 0; col < n; col++)
    {
        if (isSafe(arr, x, col, n))
        {
            arr[x][col] = 1;
            // check if next row place a queen or not
            if (nQueen(arr, x + 1, n))
            {
                return true;
            }
            else
            {
                arr[x][col] = 0; // backtracking
            }
        }
    }
    // if a row, can't place a queen in every collumn
     return false;
}

int main()
{
    int n;
    cin >> n;

    //dynamically allocate memory for a 2D arr
    int **arr = new int *[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = 0;
        }
    }

    if (nQueen(arr, 0, n))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }

    // to avoid memory leak. 
    //Memory allocated with new should be released using Deallocate memory
    for (int i = 0; i < n; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}