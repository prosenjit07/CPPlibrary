#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // dynamically allocate memory for an arr of pointers to int.
    int **arr = new int *[n];

    for (int i = 0; i < n; i++)
    {
        // For each i from 0 to n-1, memory is allocated dynamically
        // for an array of integers of size n.
        arr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = 0;
        }
    }
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // to avoid memory leak.
    // Memory allocated with new should be released using Deallocate memory
    for (int i = 0; i < n; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}