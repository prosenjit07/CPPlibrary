#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++)
    {
        if (i != 0 && i != n - 1 && arr[i] > arr[0] && arr[i] < arr[n - 1])
            sum++;
    }
    cout << sum << endl;
}