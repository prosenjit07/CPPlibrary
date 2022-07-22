#include <bits/stdc++.h>
using namespace std;

// Kadance Algorithm
int kadane(int arr[], int n)
{
    int currentSum = 0;
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currentSum += arr[i];
        if (currentSum < 0)
        {
            currentSum = 0;
        }
        maxSum = max(maxSum, currentSum);
    }

    return maxSum;
}
// Main Fuction
int main()
{
    // Input Array
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int wrapsum, totalsum = 0;
    int nonwrapsum;
    nonwrapsum = kadane(arr, n);
    for (int i = 0; i < n; i++)
    {
        totalsum += arr[i];
        // reverse array elements sign
        arr[i] = -arr[i];
    }
    // Max subarray sum = Total sum of array - sum of non-contributing elements
    //  wrapsum= totalsum - (-kadane(arr, n));
    wrapsum = totalsum + kadane(arr, n);
    cout << max(wrapsum, nonwrapsum) << endl;
    return 0;
}