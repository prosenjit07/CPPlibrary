#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t, k, d;
    cin >> n >> t >> k >> d;

    // for t1
    int t1 = 0, t2 = 0;
    if (n % k == 0)
        t1 = int(n / k) * t;
    else
        t1 = (int(n / k) * t) + t;

    //cout << "t1=" << t1 << endl;
    // for t2
    t2 = t + d;
    //cout << "t2=" << t2 << endl;

    if (t2 >= t1)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}