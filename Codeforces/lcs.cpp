#include <bits/stdc++.h>
using namespace std;

int lcs(string s1, string s2, int m, int n)
{
    int ct=0;
    if(n==m){
        for(int i=0;i<n;i++){
            if(s1[i]!=s2[i]){
                ct++;
                break;
            }
        }
        if(ct!=0){
            return n;
        }
        else{
        return 0;
        }
    }
    else{
        return max(n,m);
    }
}
int main()
{
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    int m = s1.size();
    int n = s2.size();
    int x = lcs(s1, s2, m, n);
    if (x == 0)
    {
        cout << -1 << endl;
    }
    else
        cout << x << endl;
    return 0;
}