#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    double n;
    cin>>n;

    double lo = 1, hi = n;
    while(abs(hi - lo) > 1e-7){
        double mid = (lo+hi)/2;
        if(mid*mid*mid < n){
            lo = mid;
        }
        else{
            hi = mid;
        }
    }

    cout<<lo <<" "<<hi<<endl;
}