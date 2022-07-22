#include <bits/stdc++.h>
using namespace std;

// n=2D matrix Size and  x,y is particular block
// To check that rat can move or not
bool isSafe(int **arr, int x, int y, int n)
{
    if (x < n && y < n && arr[x][y] == 1)
    {
        return true;
    }
    return false;
}
bool ratinMaze(int **arr, int x, int y, int n, int **solArr)
{
    if ((x == (n - 1)) && (y == (n - 1)))//if rat reach the destination(base case)
    {
        solArr[x][y] = 1;
        return true;
    }
    if (isSafe(arr, x, y, n))
    {
        solArr[x][y] = 1;
        if (ratinMaze(arr, x + 1, y, n, solArr))//move right path(recursive function)
        {
            return true;
        }
        if (ratinMaze(arr, x, y + 1, n, solArr))
        {
            return true;
        }
        solArr[x][y] = 0; // backtracking(if upper 2 if case not true)
        return false;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    //Dynamic Memory Allocation
    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }
    // 2D Array Input
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    //Dynamic Memory Allocation for Solution Array
    //set zero to solution array so that neglect garbage value
    int **solArr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        solArr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            solArr[i][j] = 0;
        }
    }

    if (ratinMaze(arr, 0, 0, n, solArr))
    {
        //if return true then excute bellow blocks
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << solArr[i][j] << " ";
            }
            cout << endl;
        }
    }  
    return 0;
}