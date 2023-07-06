#include<bits/stdc++.h>
using  namespace  std;

void inserts(vector<int>&v,int temp)
{
    if(v.size()==0||v[v.size()-1]<=temp)
    {
        v.push_back(temp);
        return;
    }
    int val=v[v.size()-1];
    v.pop_back();
    inserts(v,temp);
    v.push_back(val);
}

void sorts(vector<int>&v)
{
      //base condition
    if(v.size()==1)
    {
        return;
    }
    //heypothesis
    int temp=v[v.size()-1];
    v.pop_back();
    sorts(v);

    //induction step 
    //after sorting the array we will insert the last element in the sorted array
    inserts(v,temp);
}

int main()
{
    int n;
    cin>>n;
    vector<int>v;
    int x;
    for(int i=0;i<n;i++) 
    {
        cin>>x;
        v.push_back(x);
    }
    sorts(v);
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}
