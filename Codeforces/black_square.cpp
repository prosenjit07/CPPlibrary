#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[4];
    int sum = 0;
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }
    string s;
    cin >> s;
    int len = s.size();
    for (int i = 0; i < len; i++)
    {
        sum += arr[(s[i] - '0') - 1];
    }
    cout << sum << endl;
}
