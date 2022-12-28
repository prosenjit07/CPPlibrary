#include <bits/stdc++.h>
using namespace std;


int main(){
    /// TreeMap
    map<string, int> mp;

    mp["abc"] = 100;         /// O(log n)
    mp["def"] = 50;
    mp["ghi"] = 30;

    cout<<mp["def"]<<endl;

    mp["def"] = 20;

    cout<<mp["def"]<<endl;

    if(mp.count("xyz") > 0)
        cout<<"there was xyz"<<endl;
    else
        cout<<"there was no xyz"<<endl;

    cout<<"size "<<mp.size()<<endl;
    cout<<mp["xyz"]<<endl;
    cout<<"size "<<mp.size()<<endl;

    mp.erase("ghi");

    for(pair<string, int> p : mp){
        cout<<p.first<<" "<<p.second<<endl;
    }

    /// lower bound, uppper bound

    return 0;
}
