#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        int sum = 0;
        vector<int> count(3, 0);

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            sum += a[i];
            count[a[i] % 3]++;
        }

        int ans = 0;
        int remainder = sum % 3;

        if (remainder == 0)
        {
            ans = 0;
        }
         else if (n == 1)
        {
            ans = 1;
        }
        else if (remainder == 1)
        {
            if (count[1] >= 1 && count[2] >= 2)
            {
                ans = 1;
            }
            else if (count[1] == 0 && count[2] >= 2)
            {
                ans = 2;
            }
        }
        else if (remainder == 2)
        {
            if (count[2] >= 0 && count[1] >= 2)
            {
                ans = 1;
            }
            else if (count[2] == 0 && count[1] >= 2)
            {
                ans = 2;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
