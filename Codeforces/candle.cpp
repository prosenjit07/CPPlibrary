#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int count = a;
    while (a >= b)
    {
        count += a/b;
        a = (a / b) + (a % b);
    }
    cout << count << endl;

    return 0;
}