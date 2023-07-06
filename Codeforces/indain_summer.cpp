#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    optimize();
    int n;
    cin >> n;
    vector<pair<string, string>> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }


    // for (int i = 0; i < n; i++)
    // {
    //     cout << v[i].first << v[i].second << endl;
    // }
    sort(v.begin(), v.end());  //without sort unique function not work
    int Sz = unique(v.begin(), v.end()) - v.begin();
    cout << Sz << endl;
}