#include <bits/stdc++.h>
using namespace std;

int main()
{
    int c = 0;
    string line;
    getline(cin, line);
    // cin >> line  ; // {a, b, c}
    int ln = line.size();
    set<char> ch;
    for (int i = 0; i < ln; i++)
    {
        if (line[i] != '{' && line[i] != '}' && line[i] != ' ' && line[i] != ',')
            ch.insert(line[i]);
    }
    cout << ch.size() << '\n';
    return 0;
}