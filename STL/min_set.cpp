#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;

    set<int> st;

    for(int i = 0; i<n; i++){
        string type;
        cin>>type;
        int x;
        cin>>x;

        if(type == "+"){
            st.insert(x);
        }
        else{
            st.erase(x);
        }

        cout<<*st.begin()<<endl;
    }

    return 0;
}

/// + x
/// - x
