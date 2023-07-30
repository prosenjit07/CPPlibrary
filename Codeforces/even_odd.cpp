// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     long long int n, k;
//     cin >> n >> k;
//     float x = n / 2.0;
//     if (x >= float(k))
//     {
//         cout << 2 * k - 1 << endl;
//     }
//     else
//     {
//         k = k - (n + 1) / 2;
//         cout << 2 * k << endl;
//     }
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, k;
    cin >> n >> k;
    if (k <= (n + 1) / 2)
    {
        cout << k * 2 - 1 << "\n";
    }
    else
    {
        cout << (k - (n + 1) / 2) * 2 << "\n";
    }
    return 0;
}