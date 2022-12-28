#include <bits/stdc++.h>
using namespace std;

int main(){

    /// ArrayList<Integer>
    vector<int> v;

    v.push_back(10);        /// O(1)
    v.push_back(20);
    v.push_back(30);

    v[1] = 200;

    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<endl;
    }

    v.pop_back();   /// O(1)

    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<endl;
    }
    cout<<endl;

    v.clear(); /// O(1)

    cout<<v.size()<<endl;

    vector<int> w(5, -1);
    ///vector<int>w(n) /// O(n)
    for(int i = 0; i<w.size(); i++){
        cout<<w[i]<<endl;
    }

    w.resize(8);

    cout<<endl;
    for(int i = 0; i<w.size(); i++){
        cout<<w[i]<<endl;
    }


    /// for each

    for(int x : w){
        cout<<x<<endl;
    }

    vector<string> str;


    str.push_back("abc");
    str.push_back("cde");

    vector<string> str2(str);

    vector< vector<int> > v2d(3);

    v2d[0].push_back(1);
    v2d[0].push_back(2);
    v2d[0].push_back(3);

    v2d[1].push_back(4);
    v2d[1].push_back(5);
    v2d[1].push_back(6);

    v2d[2].push_back(7);
    v2d[2].push_back(8);
    v2d[2].push_back(9);

    cout<<v2d[2][1]<<endl;


    return 0;
}

