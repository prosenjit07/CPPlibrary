//https://leetcode.com/problems/maximum-average-subarray-i/submissions/988548109/
// class Solution
// {
// public:
//     double findMaxAverage(vector<int> &nums, int k)
//     {
//         double sum = 0.0;
//         double avg = 0.0;
//         vector<double> v;
//         for (int i = 0; i < k; i++)
//         {
//             sum += nums[i];
//         }
//         avg=sum/k;
//         v.push_back(avg);
//         int n = nums.size();
//         for (int i = k; i < n; i++)
//         {
//             sum += nums[i];
//             sum -= nums[i - k];
//             //nums.erase(nums.begin());
//             v.push_back((sum / k));
//         }
//         sort(v.begin(), v.end());
//         reverse(v.begin(), v.end());
//         double ans = v[0];
//         return ans;
//     }
// };


//alternative 

// class Solution
// {
// public:
//     double findMaxAverage(vector<int> &nums, int k)
//     {
//         double sum = 0.0;
//         double ans = 0.0;
//         for (int i = 0; i < k; i++)
//         {
//             sum += nums[i];
//         }
//         ans=sum/k;
//         int n = nums.size();
//         for (int i = k; i < n; i++)
//         {
//             sum += nums[i];
//             sum -= nums[i - k];
//             double num =sum /k;
//             if(ans<num) ans = num;
//         }
//         return ans;
//     }
// };