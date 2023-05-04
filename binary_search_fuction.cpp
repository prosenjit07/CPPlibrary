#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        cout<< arr[i]<<" ";
    }
    int key;
    cin >> key;
    if (binary_search(arr, arr + n, key))
    {
        cout<<"Found!"<<endl;
    }
    else
    cout<<"Not Found!"<<endl;

}