// https://practice.geeksforgeeks.org/problems/sum-of-digit-is-pallindrome-or-not2751/1
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int sum = 0;

    for (auto u : s)
    {
         sum = sum + (u - '0');
    }

    string str;
    str = to_string(sum);

    string temp = str;
    reverse(str.begin(), str.end());
    if (temp == str)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}