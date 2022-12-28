#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    /// initial I/O
    int n,q ;
    cin>>n>>q;

    vector<long long int> input(n+1);     /// 1-index
    vector<long long int> pref(n+1);

    for(int i = 1; i<=n; i++)
        cin>>input[i];


    /// prefix sum building
    pref[0] = 0;
    for(int i= 1; i<=n; i++){
        pref[i] = pref[i-1] + input[i];
    }

    /// query processing
    for(int i = 0; i<q; i++){
        int l, r;
        cin>>l>>r;

        long long int ans = pref[r] - pref[l-1];
        cout<<ans<<"\n";
    }

    return 0;
}