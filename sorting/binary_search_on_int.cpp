#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    long long int n;
    cin>>n;

    long long int lo = 1, hi = 1000000000;

    while(lo <= hi){
        long long int mid = (lo+hi)/2;
        if(mid*(mid+1)/2 <= n)
            lo = mid+1;
        else
            hi = mid-1;
    }

    long long int x = hi;
    cout<<x<<endl;      /// largest x such that 1+2+...+x <= n
}