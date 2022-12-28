#include <bits/stdc++.h>
using namespace std;

int main(){

    int a = 1, b = 10;

    cout<<max(a, b)<<endl;
    cout<<min(a, b)<<endl;

    swap(a, b);

    cout<<endl;
    cout<<a<<endl;
    cout<<b<<endl;


    int x, y;
    cin>>x>>y;

    pair<int, int> z;
    z.first = x;
    z.second = y;

    pair<int, int> w;
    w.first = 1;
    w.second = 2;

    swap(w, z);


    pair<int, string> p;
    p.first = 1;
    p.second = "abc";


    cout<<p.first<<endl;
    cout<<p.second<<endl;


    pair<int, int> p = make_pair(1, 2);

    return 0;
}