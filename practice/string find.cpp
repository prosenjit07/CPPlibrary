#include <iostream>
#include <string>

using namespace std;

bool isSingleQuotedString(const std::string &input)
{
    if (input.length() >= 2 && input.front() == '\'' && input.back() == '\'')
    {
        return true;
    }
    return false;
}

bool isDoubleQuotedString(const string &input)
{
    if (input.length() >= 2 && input.front() == '"' && input.back() == '"')
    {
        return true;
    }
    return false;
}

bool isNotString(const string &input)
{
    if (!isSingleQuotedString(input) && !isDoubleQuotedString(input))
    {
        return true;
    }
    return false;
}

int main()
{
    string input;
    getline(cin, input);

    if (isSingleQuotedString(input))
    {
        cout << "Single-quoted string." << endl;
    }
    else if (isDoubleQuotedString(input))
    {
        cout << "Double quoted String" << endl;
    }
    else if (isNotString(input))
    {
        cout << "It's not a string." << endl;
    }

    return 0;
}
