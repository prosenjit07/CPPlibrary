#include <iostream>
#include <string>

using namespace std;

bool isSingleLineComment(const std::string &input)
{
    return input.size() >= 2 && input[0] == '/' && input[1] == '/';
}

bool isMultiLineCommentStart(const std::string &input)
{
    return input.size() >= 2 && input[0] == '/' && input[1] == '*';
}

bool isMultiLineCommentEnd(const std::string &input)
{
    return input.size() >= 2 && input[0] == '*' && input[1] == '/';
}

int main()
{
    string input;
    getline(cin, input);

    if (isSingleLineComment(input))
    {
        cout << "Single line comment!" << endl;
    }
    else if (isMultiLineCommentStart(input))
    {
        bool multiLineCommentEnded = false;
        while (getline(cin, input))
        {
            if (isMultiLineCommentEnd(input))
            {
                multiLineCommentEnded = true;
                break;
            }
        }
        if (multiLineCommentEnded)
        {
            cout << "Multiline Comment!" << endl;
        }
        else
        {
            cout << "Multiline Comment!" << endl;
        }
    }
    else
    {
        cout << "Not a comment!" << endl;
    }

    return 0;
}
