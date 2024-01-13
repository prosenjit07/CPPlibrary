#include <bits/stdc++.h>
using namespace std;

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

        char targetChar = '8';

        size_t foundIndex = s.find(targetChar);

        if (foundIndex != std::string::npos && (n- foundIndex)>=11)
        {
            //int x = foundIndex;
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
     return 0;
}
