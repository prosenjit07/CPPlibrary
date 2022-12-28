#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, n;
    cout << "Enter the Number of Item:" << endl;
    cin >> n;

    int w[n];
    cout << "Enter Weight:" << endl;
    for (i = 0; i < n; i++)
        cin >> w[i];

    int v[n];
    cout << "Enter Value:"
         << endl;
    for (i = 0; i < n; i++)
        cin >> v[i];

    int W;
    cout << "Enter Maximum Capacity: " << endl;
    cin >> W;

    int table[n + 1][W + 1]; // table[5][8]
    char copied[n + 1][W + 1];
    for (i = 0; i < n + 1; i++)
        for (j = 0; j < W + 1; j++)
        {
            table[i][j] = 0;
            copied[i][j] = 'n';
        }

    for (i = 1; i < n + 1; i++)
    {
        for (j = 1; j < W + 1; j++)
        {
            if (j < w[i - 1])
            {
                table[i][j] = table[i - 1][j];
                copied[i][j] = 'y';
            }
            else
            {
                table[i][j] = max(table[i - 1][j], table[i - 1][j - w[i - 1]] + v[i - 1]);
                if (table[i][j] == table[i - 1][j])
                    copied[i][j] = 'y';
            }
            // cout<<table[i][j]<<" ";
        }
        // cout<<endl;
    }
    cout << "Printing Dynamic Table:" << endl;
    for (i = 0; i < n + 1; i++)
    {
        for (j = 0; j < W + 1; j++)
        {
            cout << table[i][j] << " ";
        }
        cout << endl;
    }

    int taken[n];
    for (i = 0; i < n; i++)
        taken[i] = 0;

    i = n, j = W;
    while (i > 0 && j > 0)
    {
        while (copied[i][j] == 'y' && i > 0)
            i--;
        taken[i - 1] = 1;
        j -= w[i - 1];
        i--;
    }

    cout << "Items Taken: " << endl;
    for (i = 0; i < n; i++)
        if (taken[i])
            cout << i + 1 << endl;

    cout << "\nWeight: " << endl;
    for (i = 0; i < n; i++)
        if (taken[i])
            cout << w[i] << endl;

    cout << "\nValue: " << endl;
    for (i = 0; i < n; i++)
        if (taken[i])
            cout << v[i] << endl;

    cout << "\nMaximum Profit:" << table[n][W] << endl;
    return 0;
}

/*
sample Input
4
3 4 6 5
2 3 1 4
8
sample output:
Enter the Number of Item:
Enter Weight:
Enter Value:
Enter Maximum Capacity:
Printing Dynamic Table:
0 0 0 0 0 0 0 0 0
0 0 0 2 2 2 2 2 2
0 0 0 2 3 3 3 5 5
0 0 0 2 3 3 3 5 5
0 0 0 2 3 4 4 5 6
Items Taken:
1
4

Weight:
3
5

Value:
2
4

Maximum Profit:6
*/