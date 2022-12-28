#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v(5);
    v[0] = 10;
    v[1] = 20;
    v[2] = 30;
    v[3] = 40;
    v[4] = 50;

    vector<int>::iterator it = v.begin();

    it += 1;

    cout<< *it <<endl;

    vector<int>::iterator it2 = v.end();

    cout<< *it2 <<endl;


    reverse(v.begin(), v.begin()+4);

    for(int x : v){
        cout<<x<<endl;
    }


    vector<int> w(5);

    w[0] = 100;
    w[1] = 50;
    w[2] = 25;
    w[3] = 300;
    w[4] = 75;

    sort(w.begin(), w.end());
    cout<<endl;
    for(int x: w){
        cout<<x<<endl;
    }


    return 0;
}
