
#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    ll int a, b, p, c;
    p = 1e18;
    cin >> a >> b;
    c = p / a;
    if (b > c)
        cout << "Big" << endl;
    else
        cout << "Small" << endl;
}
