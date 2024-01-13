#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin >> n;
    if (n == 0)
    {
        cout << "1\n";
    }
    else if (n != 0)
    {
        if (n % 4 == 1)
        {
            cout << "8\n";
        }
        else if (n % 4 == 2)
        {
            cout << "4\n";
        }
        else if (n % 4 == 3)
        {
            cout << "2\n";
        }
        else if (n % 4 == 0)
        {
            cout << "6\n";
        }
    }

    return 0;
}
