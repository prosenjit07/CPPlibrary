#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second;
}

bool custom_comp(int x, int y)
{
    return x < y;
}

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(2);

    // acending order
    // sort(v.begin(),v.end());

    decending order
    sort(v.begin(), v.end(), greater<int>());

    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << endl;
    // custom comparator sorting; its represent hoe comparator sort is work??
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = i+1; j < 3; j++)
    //     {
    //         if(!custom_comp(v[i],v[j]))
    //            swap(v[i],v[j]);
    //     }
    // }

    for (int i = 0; i <3; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    //Vector pair sorting
    int n;
    cin >> n;
    vector<pair<int, int>> v2;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v2.push_back({x, y});
    }

    sort(v2.begin(), v2.end(), comp);

    // second pair value sort in acending order
    for (int i = 0; i < n; i++)
    {
        cout << v2[i].first << " " << v2[i].second << endl;
    }
}