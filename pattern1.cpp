/*
****
*  *
*  *
*  *
****
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
    
    int i, j, row,col;
    cin>>row>>col;
    for(i=1; i<=row; i++)
    {
        for(j=1; j<=col; j++)
        {
            if(i==1 || i==row || j==1 || j==col)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}