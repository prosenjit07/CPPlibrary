#include <iostream>
using namespace std;

int main()
{
    int n, m, x, y;
    cin >> n >> m;

    char arr[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];

    cin >> x >> y;
    int p = x - 1, q = y - 1;
    bool valid = true;

    for (int i = p - 1; i <= p + 1; i++)
        for (int j = q - 1; j <= q + 1; j++)
            if (i >= 0 && i < n && j >= 0 && j < m && !(i == p && j == q) && arr[i][j] != 'x')
                valid = false;

    if (valid)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
    return 0;
}
