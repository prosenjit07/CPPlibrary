#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> q;
    q.push_back(1);
    q.push_back(2);
    q.push_front(3);
    q.push_front(4);
    //4 3      1 2

    //size of queue
    cout << q.size() << endl;
    
    cout << q.front() << endl;
    cout << q.back() << endl;

    if (q.empty())
        cout << "deque is Empty" << endl;
    else
        cout << "deque is not Empty" << endl;

    //print all queue elements
    while (!q.empty())
    {
        //print the front
        cout << q.front() << " ";
        q.pop_front();//delete the fornt
    }
    return 0;
} 