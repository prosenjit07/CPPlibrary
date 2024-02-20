#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    ll int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += (i * (n - i + 1)) * arr[i];
    }
    cout<<sum<<endl;
}
// input:
// 4
// 3 2 4 1

// output:
// 52