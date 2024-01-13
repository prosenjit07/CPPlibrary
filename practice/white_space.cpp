#include <bits/stdc++.h>
using namespace std;
int main()
{
    string input;
    getline(cin, input);
    bool inWhiteSpace = false;
    for (int i = 0; i < input.size(); i++)
    {
        if (input[i] == ' ')
        {
            if (!inWhiteSpace)
            {
                inWhiteSpace = true;
                cout << i + 1; // Adding 1 to index to start from 1-based index
            }
        }
        else
        {
            inWhiteSpace = false;
        }
        if (inWhiteSpace && i < input.size() - 1)
        {
            cout << ", ";
        }
    }
    cout << input.size() + 1 << endl;
    return 0;
}

// a b c
// 2,4,6