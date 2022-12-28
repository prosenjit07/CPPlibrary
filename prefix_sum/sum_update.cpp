#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    /// initial I/O
    int n,q ;
    cin>>n>>q;

    vector<long long int> input(n+2);     /// 1-index
    vector<long long int> updates(n+2);


    for(int i = 1; i<=n; i++)
        cin>>input[i];


    /// query processing
    for(int i = 0; i<q; i++){
        int l, r;
        cin>>l>>r;
        int x;
        cin>>x;

        updates[l] += x;
        updates[r+1] -= x;
    }


    /// lazy build

    long long int lazy = 0;
    for(int i = 1; i<=n; i++){
        input[i] += updates[i] + lazy;
        lazy += updates[i];
    }

    for(int i = 1; i<=n; i++){
        cout<<input[i]<<" ";
    }

    return 0;
}