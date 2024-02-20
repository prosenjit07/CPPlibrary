#include<bits/stdc++.h>
using namespace std;


int main()
{

    int t;
    cin >> t;

    while ( t-- ) {
        int n;
        cin >> n;

        if ( n == 2 || n == 3 ) {
            cout << "-1\n";
            continue;
        }

        for ( int i = n; i >= 1; i-- ) {
            if ( i % 2 == 1 ) cout << i << " ";
        }

        cout << 4 << " ";

        for ( int i = 2; i <= n; i += 2 ) {
            if ( i != 4 ) cout << i << " ";
        }

        cout << endl;
    }
    return 0;
}