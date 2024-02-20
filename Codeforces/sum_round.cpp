//https://codeforces.com/contest/1352/problem/A
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;

    while ( t-- ) {
        int n;
        cin >> n;

        int m = 1;
        vector<int> ans;
        while ( n > 0 ) {
            int d = n % 10;
            if ( d*m > 0 ) ans.push_back ( d * m );
            m *= 10;
            n /= 10;
        }
        cout << ans.size() << endl;
        for ( auto u  : ans ) cout << u << " ";
        cout << endl;
    }

    return 0;
}