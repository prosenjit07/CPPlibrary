#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> p, pair<int, int> q){
    if(p.first - p.second < q.first - q.second)
        return true;
    else
        return false;
}

int main(){

//    vector<pair<int, int>> v(5);
//
//    for(int i= 0; i<5; i++){
//        cin>>v[i].first;
//        v[i].second = i;
//    }
//
//    sort(v.begin(), v.end());
//
//    for(int i = 0; i<v.size(); i++){
//        cout<<v[i].second<<endl;
//    }


    vector<pair<int, int>> w(3);

    w[0] = make_pair(0, 3);
    w[1] = make_pair(5, 1);
    w[2] = make_pair(-10, -12);

    sort(w.begin(), w.end(), comp);

    cout<<endl;
    for(int i = 0; i<3; i++){
        cout<<w[i].first<<" "<<w[i].second<<endl;
    }

    return 0;
}
