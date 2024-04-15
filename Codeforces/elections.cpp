#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    long long int a, b, c;
    while (t--)
    {
        cin >> a >> b >> c;
        cout << (max(a, max(b, c) + 1) - a) << " " << (max(b, max(a, c) + 1) - b) << " " << (max(c, max(b, a) + 1) - c) << endl;
    }
    return 0;
}