/*
1
22
333
4444
55555
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    ///////////////////Jit////////////////////////
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ///////////////////Roy////////////////////////
    
    int i, j, n, row,col;
    cin>>n;
    int count=0;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            count=i;
            cout<<count;
        }
        cout<<endl;
    }

    return 0;
}