#include <bits/stdc++.h>
using namespace std;

bool odd(int elm)
{
    return (elm % 2 != 0);
}
int main()
{
    int n;
    cin >> n;
    vector<int> a = {2, 4, 6, 8, 11};
    cout << endl;
    bool value = any_of(a.begin(), a.end(), odd);
    if (value == true)
        cout << "Vector contains at least one odd number." << endl;

    a[4] = 10;
    bool result = any_of(a.begin(), a.end(), odd);

    if (result == false)
        cout << "Vector contains all even number." << endl;
}