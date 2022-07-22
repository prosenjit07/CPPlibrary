/*
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 
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
    int count=1;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            cout<<count<<" ";
            count=count+1;
        }
        cout<<endl;
    }
    return 0;
}