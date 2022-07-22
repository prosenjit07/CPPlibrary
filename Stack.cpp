#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    cout << "Size of the Stack= " << s.size() << endl;
    if (s.empty())
        cout << "Stack is Empty" << endl;
    else
        cout << "Stack is not Empty" << endl;

    cout << "Top of the Stack = " << s.top() << endl;

    cout << "Print all elements of the Stack" << endl;
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}