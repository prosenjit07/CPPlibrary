#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<char> v1 = {'1', 'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', '2'};
    vector<char> v2 = {'1', 'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', ';', '2'};
    vector<char> v3 = {'1', 'z', 'x', 'c', 'v', 'b', 'n', 'm', ',', '.', '/', '2'};
    char c;
    cin >> c;
    string s;
    cin >> s;
    int n;
    if (c == 'L')
        n = 1; // forward
    else
        n = -1; // reverse
    for (int j = 0; j < s.length(); ++j)
    {
        for (int i = 0; i < 12; ++i)
        {
            if (v1[i] == s[j])
            {
                cout << v1[i + n];
            }
            if (v2[i] == s[j])
            {
                cout << v2[i + n];
            }
            if (v3[i] == s[j])
            {
                cout << v3[i + n];
            }
        }
    }
}