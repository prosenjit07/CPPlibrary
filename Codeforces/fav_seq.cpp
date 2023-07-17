// https://codeforces.com/problemset/problem/1462/A
#include <bits/stdc++.h>
using namespace std;

void solution(vector<int> v, int x)
{
    // for (int i = 0; i < x; i++)
    // {
    //     cout << v[i] << " ";
    //     v.erase(v.begin() + i);
    //     cout << v[x - 1] << " ";
    //     v.erase(v.end() - i);
    // }
    for (int i = 0; i < x; i++)
    {

        cout << v[0] << " ";
        v.erase(v.begin());

        cout << v[x - 1] << " ";
        v.erase(v.end() - i);
    }
}
int main()
{
    int t;
    cin >> t;
    vector<int> v;

    for (int i = 0; i < t; i++)
    {
        int x;
        int p;
        cin >> x;

        for (int i = 0; i < x; i++)
        {
            cin >> p;
            v.push_back(p);
        }

        solution(v, x);
    }
   
    return 0;
}