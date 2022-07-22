#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int p;
    while (cin >> p)
    {
        v.push_back(p);
    }
    // print all vector elements
    // auto i=3.1416;
    // i will be automatically float data type
    for (auto i : v)
        cout << i << " ";
}