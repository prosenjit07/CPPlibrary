#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>> n;

    int t = 1;

    while(2*t <= n)
        t *= 2;

    cout<<t<<"\n";

    return 0;
}

/// O(log n)
