#include <bits/stdc++.h>
using namespace std;


int main(){

    set<int> st;

    st.insert(20);      /// O(log n)
    st.insert(10);
    st.insert(15);
    st.insert(20);

    for(int x : st){    /// O(n)
        cout<<x<<endl;
    }

    st.erase(15);       /// O(log n)

    cout<<endl;
    for(int x : st){    /// O(n)
        cout<<x<<endl;
    }

    if(st.count(13) > 0)
        cout<<"there exists 13";
    else
        cout<<" there is no 13";

    cout<<endl;

    if(st.count(10) > 0)
        cout<<"there exists 10";
    else
        cout<<" there is no 10";


    cout<<st.size()<<endl;

    /// lower bound , upper bound

    return 0;
}



