// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<int> arr1;
//         vector<int> arr2;
//         for (int i = 0; i < n; i++)
//         {
//             int p;
//             cin >> p;
//             arr1.push_back(p);
//         }
//         for (int i = 0; i < n; i++)
//         {
//             int q;
//             cin >> q;
//             arr2.push_back(q);
//         }
//         // for (int i = 0; i < n; i++)
//         // {
//         //     cout << arr1[i] << " ";
//         // }
//         int ct = 0;
//         for (int i = 0; i < n; i++)
//         {
//             int x = arr1[i];
//             int y = arr2[i];
//             // cout << x << " " << y << endl;
//             int a = arr1[x];
//             int b = arr2[y];
//             int c = arr1[y];
//             int d = arr2[x];
//             if ((x < y) && (a == b) && (c == d))
//             {
//                 ct++;
//             }
//         }
//         cout << ct << endl;
//         // arr1.erase(arr1.begin(),arr1.end());
//         // arr2.erase(arr2.begin(),arr2.end());
//     }

//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// int countGoodPairs(vector<int>& A, vector<int>& B) {
//     int n = A.size();
//     int goodPairs = 0;

//     for (int i = 0; i < n; i++) {
//         for (int j = i + 1; j < n; j++) {
//             if (A[i] < A[j] && A[i] == B[j] && A[j] == B[i]) {
//                 goodPairs++;
//             }
//         }
//     }

//     return goodPairs;
// }

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> A(n);
//         vector<int> B(n);

//         for (int i = 0; i < n; i++) {
//             cin >> A[i];
//         }
//         for (int i = 0; i < n; i++) {
//             cin >> B[i];
//         }

//         int result = countGoodPairs(A, B);
//         cout << result << endl;
//     }

//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// int countGoodPairs(vector<int>& A, vector<int>& B) {
//     int n = A.size();
//     int goodPairs = 0;

//     for (int i = 0; i < n; i++) {
//         for (int j = i + 1; j < n; j++) {
//             if (A[i] < A[j] && A[i] == B[j] && A[j] == B[i]) {
//                 goodPairs++;
//             }
//         }
//     }

//     return goodPairs;
// }

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> A(n);
//         vector<int> B(n);

//         for (int i = 0; i < n; i++) {
//             cin >> A[i];
//         }
//         for (int i = 0; i < n; i++) {
//             cin >> B[i];
//         }

//         int result = countGoodPairs(A, B);
//         cout << result << endl;
//     }

//     return 0;
// }



