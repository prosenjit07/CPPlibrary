#include <bits/stdc++.h>
using namespace std;


/// evens come first
/// evens increasing
/// odds decreasing


bool comp(int x, int y){
    if((x % 2) != (y % 2))
        return (x%2) < (y%2);
    else if(x % 2 == 0){
        return x < y;
    }
    else{
        return x > y;
    }
}

/// comp(2, 9); true
/// comp(2, 10); true
/// comp(1, 9); false

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    vector<int> v;

    v.push_back(10);
    v.push_back(1);
    v.push_back(5);
    v.push_back(9);
    v.push_back(2);


    /// 2 10 9 5 1

    sort(v.begin(), v.end(), comp);  /// O(n log n)  , n <= 10000000

    for(int x : v)
        cout<<x<<endl;
}