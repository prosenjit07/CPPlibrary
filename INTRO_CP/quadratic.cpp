#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>> n;

    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout<<"("<<i<<","<<j<<")\n";
        }
    }

    for(int i = 1; i<=n; i++)
        cout<<i<<"\n";

    return 0;
}

/// O(n^2)
