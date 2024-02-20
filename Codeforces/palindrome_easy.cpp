#include <bits/stdc++.h>
using namespace std;
#define nl      '\n'

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int z = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
                z++;
        }
        if (z == 0)
            cout << "DRAW" << nl;
        else if (z % 2 == 0)
        {
            cout << "BOB" << nl;
        }
        else
        {
            if (z == 1)
                cout << "BOB" << nl;
            else
                cout << "ALICE" << nl;
        }
    }
}
