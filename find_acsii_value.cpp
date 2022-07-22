#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ascii;
    int dec, n;
    cout << "Dec to Ascii(Press1) or "
         << "Ascii to Dec(Press2)" << endl;
    cin >> n;
    switch (n)
    {
    case 1:
        cin >> ascii;
        cout << (int)ascii << endl;
        break;
    case 2:
        cin >> dec;
        cout << char(dec) << endl;
        break;
    default:
        cout << "Enter 1 or 2" << endl;
        break;
    }
}