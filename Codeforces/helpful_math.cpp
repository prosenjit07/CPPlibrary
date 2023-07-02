#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int len = s.size();
    vector<int> v;
    for (int i = 0; i < len; i++)
    {
        if (s[i] != '+')
        {
            v.push_back(s[i] - '0');
        }
    }
    sort(v.begin(), v.end());
    int j = 0;

    for (int i = 0; i <len; i++)
    {
        if (i % 2 == 0)
        {
            cout << v[j];
            j++;
        }
        else
            cout << "+";
    }
}
