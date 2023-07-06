#include <bits/stdc++.h>
using namespace std;

int main()
{
    /// Declaration of multiset of integers
    //it allowed repeated values
    multiset<int> s = {1, 1, 2, 1, 3, 4};

    // s.erase(1);
    // for (auto u : s)
    //     cout << u << " "; /// 2 3 4
    // cout << endl;

    auto x = s.find(1); // find 1 first position address
    s.erase(x);         // delete this position
    for (auto u : s)
        cout << u << " "; /// 1 1 2 3 4
    cout << endl;

    return 0;
}
