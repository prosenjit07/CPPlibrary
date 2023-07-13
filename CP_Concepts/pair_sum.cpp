//binary search
//two pointer
//find pair which sum equal to k

/*
Input:
4
1 5 4 3
4
Output:
1 3
*/

#include <bits/stdc++.h>
using namespace std;

int val1, val2;
bool pair_sum(int *arr, int x, int n)
{
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        int y = arr[i] + arr[j];
        if (y == x)
        {
            val1 = arr[i];
            val2 = arr[j];
            return true;
        }
        if (x > y)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    int target;
    cin >> target;
    if (pair_sum(arr, target, n) == 1)
    {
        cout << val1 << " " << val2 << endl;
    }
    else
    {
        cout << "Not Possible pair" << endl;
    }
    return 0;
}

