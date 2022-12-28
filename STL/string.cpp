#include <bits/stdc++.h>
using namespace std;

int main(){

    string str = "abc";

    cin>>str;

    str[0] = 'A';       ///ASCII

    cout<<str<<endl;

    cout<<str.size()<<endl;

    for(int i = 0; i<str.size(); i++)
        cout<<str[i]<<endl;

    str += "xyz";

    cout<<str<<endl;

    return 0;
}