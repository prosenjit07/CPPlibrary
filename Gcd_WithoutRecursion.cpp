#include <bits/stdc++.h>
using namespace std;

int gcd(int m, int n)
{
    int arr1[m / 2];
    int arr2[n / 2];
    int p = 0;
    int q = 0;
    // Find m Divisor
    cout << m << " Divisor is:";
    for (int i = 1; i <= m; i++)
    {
        int x = m % i;
        if (x == 0)
        {
            arr1[p] = i;
            cout << arr1[p] << " ";
            p++;
        }
    }
    cout << " " << endl;
    // Find n Divisor
    cout << n << " Divisor is:";
    for (int i = 1; i <= n; i++)
    {
        int y = n % i;
        if (y == 0)
        {
            arr2[q] = i;
            cout << arr2[q] << " ";
            q++;
        }
    }
    cout << endl;
    int count = 0;
    int arr3[m / 2];
    // Find max Divisor
    for (int i = 0; i < m / 2 - 1; i++)
    {
        for (int j = 0; j < n / 2 - 1; j++)
        {
            if (arr1[i] == arr2[j])
            {
                arr3[count] = arr1[i];
                count++;
            }
        }
    }
    int result = arr3[count - 1];
    return result;
}

int main()
{
    int m, n;
    cin >> m >> n;
    cout << "GCD = " << gcd(m, n) << endl;
    return 0;
}