#include <bits/stdc++.h>
using namespace std;

int c[26];
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] < 97)//Capital
        {
            s[i] = s[i] + 32;//convert to small
            c[s[i] - 'a'] += 1;//hasing
        }
        else//small
        {
            c[s[i] - 'a'] += 1;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if (c[i] == 0)
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}