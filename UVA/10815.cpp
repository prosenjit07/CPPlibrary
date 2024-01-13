#include <iostream>
#include <set>
#include <sstream>
#include <cctype> // for isalpha

using namespace std;

int main()
{
    string line;
    set<string> tree;

    while (getline(cin, line))
    {
        string str = "";
        for (int i = 0; i < line.length(); i++)
        {
            if (isalpha(line[i]))
                str += tolower(line[i]);
            else if (line[i] == ' ')
                str += ' ';
        }

        stringstream sin(str);
        string token;

        while (sin >> token)
        {
            cout<<token<<endl;
            tree.insert(token);
        }
    }

    for (set<string>::iterator it = tree.begin(); it != tree.end(); it++)
    {
        cout << *it << endl;
    }

    return 0;
}
