#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)
void faltu () {            cerr << endl;}
template < typename T, typename ... hello>void faltu( T arg, const hello &... rest) {cerr << arg << ' ';faltu(rest...);}

const int mx = 2e5+123;
int a[mx];

int main()
{
    optimize();

    int t;
    cin >> t;

    while ( t-- ) {
        int n;
        cin >> n;

        priority_queue <pair<int, int> > q;
        //TO GET LEFTMOST VALUES    
        q.push ( { n, -1 } );

        for ( int i = 1; i <= n; i++ ) {
            pair<int, int > p = q.top();
            q.pop();
            //first=size           second=first value
            int l = p.second * -1;
            int r = l + p.first - 1;


            if ( l == r ) {
                a[l] = i;
                continue;
            }

            int mid;
            if ( p.first % 2 == 1 ) mid = ( l + r ) / 2;
            else mid = ( l + r - 1 ) / 2;

            a[mid] = i;

            //left subarray
            int l1 = l, r1 = mid - 1;
            int len1 = r1 - l1 + 1;

            //right subarray
            int l2 = mid+1, r2 = r;
            int len2 = r2 - l2 + 1;

            if ( l1 <= r1 ) //atlist one left subarray
            q.push ( {len1, -l1} );//left subarray
            q.push ( {len2, -l2} );//right subarray
        }

        for ( int i = 1; i <= n; i++ ) cout << a[i] << " ";
        cout << endl;
    }
    return 0;
}