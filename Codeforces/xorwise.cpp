#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int mnum = min(a, b);
        int ans = (a ^ 1) + (b ^ 1);
        int minans = ans;
        for (int i = 2; i <= mnum; i++)
        {
            ans = (a ^ i) + (b ^ i);
            if (ans < minans)
            {
                minans = ans;
            }
        }
        cout << ans << endl;
    }
    return 0;
}