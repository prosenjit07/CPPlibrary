// Given an array nums of distinct integers,return all the possible permutations.You can return the answer in any order.
/*
Sample Input
3
1 2 3
Sample output
123
132
213
231
321
312
*/
/*
**sodo-code**
if(idx == nums.size()){
   ans.push_back(nums);
   return;
}
for(int i=idx;i<nums.size();i++){
    swap(nums[i],nums[idx]);
    solve(nums,ans,idx+1);
    swap(nums[i],nums[idx]);
}
*/
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> ans;
void permute(vector<int> &a, int idx)
{
    if (idx == a.size()) // base case
    {
        ans.push_back(a);
        return;
    }
    for (int i = idx; i < a.size(); i++)
    {
        swap(a[i], a[idx]);
        permute(a, idx + 1);
        swap(a[i], a[idx]);
    }
    return;
}
int32_t main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    // input n integer
    for (int i = 0; i < a.size(); i++)
    {
        cin >> a[i];
    }
    /*
    for (auto &i : a)
        cin >> i;
    */
    sort(a.begin(), a.end());
    do
    {
        ans.push_back(a);
    } while (next_permutation(a.begin(), a.end()));
    // syntex
    // for ( range_declaration : range_expression )
    // loop_statement
    int x=0;
    for (auto v : ans)
    {
        for (auto i : v)
            cout << i << "";
        cout << "\n";
        x++;
    }
    cout << "Permutation Number: " << x << endl;
}
//Complexity: 0(N)