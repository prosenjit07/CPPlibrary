/*
*****
****
***
**
*
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
    for(i=n; i>=1; i--)//i=5,4,3,2,1
    {
        for(j=1; j<=i; j++)//j=1,2,3,4,5
        {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}