// https://leetcode.com/problems/substrings-of-size-three-with-distinct-characters/submissions/988494944/
//  using sliding window technique
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int x;
    cin >> x; // length of substring
    int n = s.size();
    int ans = 0;
    if (x > n)
    {
        cout << ans << endl;
    }
    else
    {
        map<char, int> m;
        // s=xyzxyz and x=3
        for (int i = 0; i < x; i++)
        {
            m[s[i]]++;
        }
        if (m.size() == x)
        {
            ans++;
        }
        for (int i = x; i < n; i++)
        {
            m[s[i]]++;            // add the last character
            m[s[i - x]]--;        // decrease the first character count
            if (m[s[i - x]] == 0) // if the count of the first character is 0, then remove it from the map
            {
                m.erase(s[i - x]); // remove o count char so that map size isn't increase.
            }
            // if the size of the map is equal to the length of the substring,
            // then increment the answer
            if (m.size() == x)
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
// Input:
// xyzzaz 3
// Output: 1
