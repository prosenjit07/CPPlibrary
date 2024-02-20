#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max_sum = 0;
    int min_sum = 0;
    for (int i = 0; i < n; i++)
    {
        max_sum += arr[i] * pow(2, i);
    }
    for (int i = 0; i < n; i++)
    {
        min_sum += arr[i] * pow(2, (n - i - 1));
    }
    cout << max_sum - min_sum << endl;

    return 0;
}

// Input
// 3
// 1 2 3

// explanation:
// subset: 1, (1,2),(1,2,3),(1,3),(2),(2,3),3
// min: 4,2,1
// max= 1,2,4
// diff=max-min

// Ouptut:
