// binary search
//two pointer
// find closest pair which sum equal to k

/*
Input:
4
22 11 2 3
16
Output:
3 11
*/
#include <bits/stdc++.h>
using namespace std;

int val1, val2;
void pair_sum(int *arr, int x, int n)
{
    int i = 0;
    int j = n - 1;
    int dif = INT16_MAX;

    while (i < j)
    {
        int sum = arr[i] + arr[j];

        if ((sum - x) < dif)
        {
            val1 = arr[i];
            val2 = arr[j];
            dif = abs(sum - x);
        }
        if (x > sum)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
   cout << val1 << " " << val2 << endl;
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
    pair_sum(arr, target, n);

    return 0;
}
