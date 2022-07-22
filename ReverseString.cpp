#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    // using buildin function to reverse a string
    reverse(str.begin(), str.end());
    cout << "\n"
         << str;
    // Another Approach
    string str2 = "Advance Programming Camp";
    cout << "\n"
         << "Printing string in reverse\n";
    for (int i = str2.length() - 1; i >= 0; i--)
    {
        cout << str2[i];
    }

    // string length counter
    string str1;
    getline(cin, str1);
    int count = 0;
    int count2 = 0;
    for (int i = 0; i < str1.length(); i++)
    {
        if (str1[i] == ' ')
        {
            count2++;
            count++;
        }
        else
            count++;
    }
    cout << "String Length with space= " << count << endl;
    cout << "String Length without space= " << count - count2 << endl;
    return 0;
}