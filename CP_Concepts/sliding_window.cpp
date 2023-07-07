#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    string t;
    cin >> t; 
    int n = s.size();
    int m = t.size();
    string str;
    for (int i = 0; i < m; i++) {
        str += s[i];
    }
    int ans = 0;
    if (t == str) {
        ans++;
    }
    for (int i = m; i < n; i++) {
        str += s[i];
        str.erase(str.begin());//erase the first character
        if (t == str) {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}

/*
Input:
abababa
aba
Output:
3
*/
