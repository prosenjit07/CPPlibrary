#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long int n;

    cin>> n;

    long long int ans = 0;
    for(long long int i = 1; i<=n; i++)
        ans += i;
    cout<<ans<<"\n";

    return 0;
}

/// O(n)
