#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num; // Reading input from STDIN
    while (num--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int sz = unique(v.begin(), v.end()) - v.begin();
        cout << sz<<endl;
    }
}