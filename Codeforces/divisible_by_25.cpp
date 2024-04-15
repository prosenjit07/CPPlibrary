#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.length();
        int ans = n;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int val = (s[i] - '0') * 10 + (s[j] - '0');
                //cout << val << endl;
                if (val % 25 == 0)
                {
                    ans = min(ans, n-2-i);
                    //cout << "ans: " << ans << endl;
                }
            }
        }
         cout << ans << endl;
    }
    return 0;
}