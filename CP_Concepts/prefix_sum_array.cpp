#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout << "enter the size of array" << endl;
    cin >> n;
    int arr[n];
    cout << "enter the elements of array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int d[n + 1];
    for (int i = 0; i <= n; i++)
    {
        if (i == 0)
        {
            d[i] = arr[i];
        }
        else
        {
            d[i] = arr[i] - arr[i - 1];
        }
    }
    // we have created a difference array
    int l;
    int r;
    cout << "enter the range you want to perform operation" << endl;
    cin >> l >> r;

    int value;
    cout << "enter the value" << endl;
    cin >> value;

    d[l] = d[l] + value;
    d[r + 1] = d[r + 1] - value;

    // now query is updated
    //  find the prefix sum array of difference array
    cout << "The updated array" << endl;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            arr[i] = d[i];
            cout << arr[i] << " ";
        }
        else
        {
            arr[i] = d[i] + d[i - 1];
            d[i] = d[i] + d[i - 1];
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}
