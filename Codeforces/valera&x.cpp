#include <iostream>
#include <string>
#include <random>
#include <cmath>
#include <set>
#include "stack"
#include "algorithm"
using namespace std;
const long long N = 300;
int main()
{
    int n;
    cin >> n;
    char arr[N][N];
    set<char> s;
    char di;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> arr[i][j];
            s.insert(arr[i][j]);
            di = arr[0][0];
            if (i + j == n - 1 || i == j)
            {
                if (arr[i][j] != di)
                {
                    cout << "NO";
                    return 0;
                }
            }
            else if ((i + j) != n - 1 and i != j and arr[i][j] == di)
            {
                cout << "NO";
                return 0;
            }
        }
    }
    // print set
    // for (auto i : s)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;

    if (s.size() != 2)
    {
        cout << "NO";
        return 0;
    }
    cout << "YES";
}
