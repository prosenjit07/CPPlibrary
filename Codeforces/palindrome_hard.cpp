//https://codeforces.com/contest/1527/problem/B2
#include<bits/stdc++.h>
using  namespace  std;

#define nl      '\n'
 
bool palindrom(string s)
{
    string s1=s;
    reverse(s1.begin(),s1.end());
    if(s1==s)return true;
    return false;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int z=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0')z++;
        }
        if(palindrom(s))
        {
            if(z==0)cout<<"DRAW"<<nl;
            else if(z%2==0)
            {
                cout<<"BOB"<<nl;
            }
            else
            {
                if(z==1)cout<<"BOB"<<nl;
                else cout<<"ALICE"<<nl;
            }
        }
        else{
            if(z==2 && n%2==1 && s[n/2]=='0')cout<<"DRAW"<<nl;
            else cout<<"ALICE"<<nl;
        }
    }
    return 0;
}