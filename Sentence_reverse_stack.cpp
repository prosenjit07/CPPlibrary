#include <bits/stdc++.h>
using namespace std;
int main()
{
    string sentence = "Advance programming Camp";
    int i = 0;
    string word = " ";
    stack<string> s;
    while (i < sentence.length() + 1)
    {
        if (sentence[i] == ' ' || sentence[i] == '\0')
        {
            s.push(word);
            word = "";
        }
        word = word + sentence[i];
        i++;
    }
    while (!s.empty())
    {
        cout << s.top();
        s.pop();
    }
}