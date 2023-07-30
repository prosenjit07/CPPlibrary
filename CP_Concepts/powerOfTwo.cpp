#include <bits/stdc++.h>
using namespace std;


int main()
{
    int x;
    cin >> x;
    int res = x & (x - 1); // computer will automaticaly generated in binary format 
    if (res == 0)
    {
        cout << "power of 2" << endl;
    }
    else
        cout << "it is not power of 2" << endl;
}
// 8=2^3
// 5!=2^of anythong