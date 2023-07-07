#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "xyzzaz";
    int x=3;
    map<char, int> m;
    for (int i = 0; i < x; i++)
    {
        m[s[i]]++;
    }

    for (auto it : m)
    {
        cout << it.first << " " << it.second << endl;
    }
    int i = x;
    m[s[i]]++;     // add the last character
    m[s[i - x]]--; // remove the first character

    cout << "after"<<endl;
    for (auto it : m)
    {
        cout << it.first << " " << it.second << endl;
    }
}