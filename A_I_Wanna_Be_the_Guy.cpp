#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, p, q, cnt = 0;
    cin >> n >> p;
    int arr[300];
    for (int i = 0; i < p; i++)
    {
        cin >> arr[i];
    }
    cin >> q;
    for (int i = p; i < p + q; i++)
    {
        cin >> arr[i];
    }
    set<int> s1;
    for (int i = 0; i < p + q; i++)
    {
        s1.insert(arr[i]);
    }
    for (auto x : s1)
        cnt++;
    if (cnt == n)
        cout << "I become the guy.";
    else
        cout << "Oh, my keyboard!";
    return 0;
}