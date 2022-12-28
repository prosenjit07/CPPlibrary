#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    /// initial I/O
    int n;
    cin>>n;

    vector<long long int> input(n+1);     /// 1-index
    vector<long long int> pref(n+1);

    for(int i = 1; i<=n; i++)
        cin>>input[i];


    /// prefix sum building
    pref[0] = 0;
    for(int i= 1; i<=n; i++){
        pref[i] = pref[i-1] + input[i];
    }


    long long int minsofar = 0;
    long long int ans = -1e18; /// 10^18

    for(int r = 1; r <= n; r++){
        long long int x = pref[r];
        long long int sum = x - minsofar;
        ans = max(ans, sum);

        minsofar = min(minsofar, pref[r]);
    }

    cout<<ans<<endl;
    return 0;
}
