#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        arr[x - 1] = i;
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}