#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, int> feq;
    cout << feq.size() << endl;
    cout << feq[2] << endl;
    cout << feq.size() << endl;//it will increase map size cause, it access feq[4]
    feq[10]++;
    feq[10]++;
    feq[10]++;
    cout << feq.size() << endl;
    cout << feq[10] << endl;
} 