//https://codeforces.com/contest/1660/problem/C
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
        int cnt = 0;
        map<char, int> mp;
        string ans;
        for (int i = 0; i < s.size() - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                ans += s[i];
                ans += s[i + 1];
                i++;
                // cout << i << " " << ans << endl;
            }
            else
            {
                while (i < s.size() && mp[s[i]] != 1)
                {
                    mp[s[i]] = 1;
                    i++;
                    //cout << s[i] << " " << i << endl;
                }
                if (i < s.size())//after delete find doupliate
                {
                    ans += s[i];
                    ans += s[i];
                    cout<<ans<<endl;
                }
                mp.clear();
            }
            // cout<<i<<" "<<ans<<endl;
        }
        // cout<<s<<" "<<ans<<endl;
        cout << s.size() - ans.size() << endl;
    }
}
