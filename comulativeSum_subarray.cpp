// Cumulative sum approach
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
    
    int currsum[n + 1];
    currsum[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        currsum[i] = currsum[i - 1] + arr[i - 1];
    }
    int maxsum = INT_MIN;//INT_MIN means olwest value of integer
    for (int i = 1; i <= n; i++)
    {
        int sum = 0;
        for (int j = 0; j < i; j++)
        {
            sum = currsum[i] - currsum[j];
            maxsum = max(sum, maxsum);
        }
    }
    cout << maxsum;
    return 0;
}
//complexity: 0(n^2)