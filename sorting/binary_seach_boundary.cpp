#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);  /// 3
    ///----------------
    v.push_back(60);  /// 4
    v.push_back(60);
    v.push_back(60);  /// 6

    v.push_back(80);  /// 7
    v.push_back(90);
    v.push_back(100);


    int lo = 0, hi = v.size()-1;

    while(lo <= hi){
        int mid = (lo+hi)/2;
        if(v[mid] > 60)
            hi = mid-1;
        else
            lo = mid+1;
    }


    cout<<hi<<" "<<lo<<endl;
}



