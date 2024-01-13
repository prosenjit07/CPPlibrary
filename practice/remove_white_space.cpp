#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    getline(cin, input);
    int len = input.length();

    string result;
    for (int i = 0; i < len; i++)
    {
        if (input[i] != ' ')
        {
            result += input[i];
        }
    }

    cout << result << endl;

    return 0;
}
