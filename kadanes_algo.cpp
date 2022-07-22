#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    // initializing array
    for (int i = 0; i < n; i++)
    { 
        cin >> arr[i];
    }

    int result[n];
    int currentsum = 0;
    // find currentsum
    for (int i = 0; i < n; i++)
    {
        currentsum = currentsum + arr[i];
        result[i] = currentsum;
        if (currentsum < 0)
        {
            currentsum = 0;
        }
    }
    // find maximum sum
    int max = result[0];
    for (int j = 0; j < n; j++)
    {
        if (result[j] > max)
        {
            max = result[j];
        }
    }
    cout << max << endl;

    return 0;
}
// Another Approach
/*
// find maximum sum subarray
#include <bits/stdc++.h>
#include <climits>
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
    int currentsum = 0;
    int maxsum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currentsum += arr[i];
        if (currentsum < 0)
        {
            currentsum = 0;
        }
        maxsum = max(maxsum, currentsum);
    }
    cout << maxsum << endl;
    return 0;
}
// complexity: 0(n)
*/