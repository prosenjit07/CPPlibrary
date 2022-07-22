//bruteforce approach
#include <bits/stdc++.h>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter the number of Array of element" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        // cout<<arr[i]<<endl;
    }
    int max_sum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += arr[k];
            }
            max_sum = max(max_sum, sum);
        }
    }
    cout << max_sum << endl;

    return 0;
}

//complexity: 0(n^3)