#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    /// initial I/O
    int n, s;
    cin>>n>>s;

    vector<long long int> input(n+1);     /// 1-index
    vector<long long int> pref(n+1);

    for(int i = 1; i<=n; i++)
        cin>>input[i];


    /// prefix sum building
    pref[0] = 0;
    for(int i= 1; i<=n; i++){
        pref[i] = pref[i-1] + input[i];
    }


    map<long long int, int> mp;

    long long int ans = 0;

    mp[0] = 1;
    for(int i = 1; i<= n; i++){
        long long int key = pref[i] - s;
        ans += mp[key];
        mp[pref[i]]++;
    }

    cout<<ans<<endl;

    return 0;
}