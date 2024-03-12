#include <bits/stdc++.h>
using namespace std;

#define nl '\n'

int main()
{
    vector<string> days = {"monday", "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday"};
    string a, b;
    cin >> a >> b;
    int ind1, ind2;
    for (int i = 0; i < 7; i++)
    {
        if (days[i] == a)
        {
            ind1 = i;
        }
        if (days[i] == b)
        {
            ind2 = i;
        }
    }
    if ((ind1 + 28) % 7 == ind2 || (ind1 + 30) % 7 == ind2 || (ind1 + 31) % 7 == ind2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
