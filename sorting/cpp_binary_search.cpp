#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(60);  /// 4
    v.push_back(60);
    v.push_back(60);
    v.push_back(80);  /// 7
    v.push_back(90);
    v.push_back(100);


    int ind1 = lower_bound(v.begin(), v.end(), 60) - v.begin();
    int ind2 = upper_bound(v.begin(), v.end(), 60) - v.begin();

    cout<<ind1<<endl;
    cout<<ind2<<endl;

    cout<<ind2 - ind1<<endl;
}
