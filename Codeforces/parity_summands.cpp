//https://codeforces.com/contest/1352/problem/B
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while ( t-- ) {
        int n, k;
        cin >> n >> k;

        bool f1 = n % 2;
        bool f2 = k % 2;

        if ( n < k ) cout << "NO\n";
        else if ( f1 == 1 && f2 == 0 ) cout << "NO\n";
        
        else if ( ( f1 == 0 && f2 == 0 ) || ( f1 == 1 && f2 == 1 )  ) {
            cout << "YES\n";
            for ( int i = 1; i < k; i++ ) {
                cout << 1 << " ";
                n--;
            }

            cout << n << endl;
        }
        else if ( f1 == 0 && f2 == 1 ) {

            if ( n / 2 >= k ) {
                cout << "YES\n";
                for ( int i = 1; i < k; i++ ) {
                    cout << 2 << " ";
                    n -= 2;
                }

                cout << n << endl;

            }
            else cout << "NO\n";
        }
    }

    return 0;
}