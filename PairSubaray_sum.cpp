/*Check if there exists two elements in an
array such that their sum is equal to given k
*/
// Time Complexity: O(n)
#include <bits/stdc++.h>
using namespace std;
bool subarray_sum(int arr[], int n, int k)
{
    int low = 0;
    int high = n - 1;
    int flag = 0;
    while (low < high)
    {
        if (arr[low] + arr[high] == k)
        {
            cout << "Index " << low + 1 << " and " << high + 1 << endl;
            return true;
        }
        else if (arr[low] + arr[high] < k)
        {
            low++;
        }
        else if (arr[low] + arr[high] > k)
        {
            high--;
        }
    }
    return false;
}
int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // return bool fuction value(store to x)
    int x = subarray_sum(arr, n, k);
    if (x == 1)
    {
        cout << "Subarray Found" << endl;
    }
    else
    {
        cout << "Subarray not Found" << endl;
    }
    return 0;
}
/*
// Bruteforce Approach
//Time Complexity: O(n^2)
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    int flag = 0;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == k)
            {
                cout << "Yes! Found index: " << i+1 << " and " << j+1 << endl;
                flag = 1;
            }
        }
    }
    if (flag == 0)
    {
        cout <<"Not Found!"<< endl;
    }

    return 0;
}
*/