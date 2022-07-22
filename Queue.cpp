#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout << q.size() << endl;

    cout << q.front() << endl;
    cout << q.back() << endl;

    if (q.empty())
        cout << "Queue is Empty" << endl;
    else
        cout << "Queue is not Empty" << endl;

    //print all queue elements
    while (!q.empty())
    {
        //print the front
        cout << q.front() << " ";
        q.pop();//delete the fornt
    }
    return 0;
}