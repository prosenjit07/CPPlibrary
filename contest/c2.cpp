#include <bits/stdc++.h>
using namespace std;

int largestDivisor(int num)
{
    int largest = 1;
    for (int i = 2; i * i <= num; ++i)
    {
        // Check if 'i' is a divisor of 'num'
        if (num % i == 0)
        {
            largest = i;

            // Divide 'num' by 'i' as many times as possible
            while (num % i == 0)
            {
                num /= i;
            }
        }
    }
    if (num > 1)
    {
        largest = num;
    }

    return largest;
}
//  is [1,2,3,4]
// .
// After performing swap(2)
// , a
//  changes to [2–,1–,3,4]
//  (the elements being swapped are underlined).
// After performing swap(3)
// , a
//  changes to [3–,1,2–,4]
// .
// After performing swap(4)
// , a
//  changes to [3,4–,2,1–]
// .
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v1;
        for (int i = 1; i <= n; i++)
        {
            int p;
            cin >> p;
            v1.push_back(p);
        }
        int x = largestDivisor(n);
        if (v.size() < 2)
        {
            swap(v1[0], v1[x - 1]);
        }
        cout << d << endl;
    }
    return 0;
}