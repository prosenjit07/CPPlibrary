//advance binary search

// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;
// const int N = 1e5 + 5;
// int n, c, t;
// int INF = -10000;
// int arr[N];

// bool check(int d)
// {
//     int last = -INF;
//     int ct = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] - last >= d)
//         {
//             ct++;
//             last = arr[i];
//         }
//     }
//     if (ct >= c)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }

// void binarySearch(int low, int high)
// {
//     int ans;
//     while (high > low)
//     {
//         int mid = low + high / 2;
//         if (check(mid))
//         {
//             ans = mid;
//             low = mid;
//         }
//         else
//         {
//             high = mid - 1;
//         }
//     }
//     cout << ans << endl;
// }

// int main()
// {
//     cin >> t;
//     while (t--)
//     {
//         cin >> n >> c;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }
//         sort(arr, arr + n);
//         binarySearch(0, N - 1);
//     }
//     return 0;
// }

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool canPlaceCows(const vector<int>& stalls, int distance, int cows) {
    int count = 1;
    int last_position = stalls[0];
    for (int i = 1; i < stalls.size(); ++i) {
        if (stalls[i] - last_position >= distance) {
            last_position = stalls[i];
            count++;
        }
    }
    return count >= cows;
}

int largestMinimumDistance(const vector<int>& stalls, int cows) {
    int low = 0;
    int high = stalls[stalls.size() - 1] - stalls[0];
    int largestMinDistance = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (canPlaceCows(stalls, mid, cows)) {
            largestMinDistance = max(largestMinDistance, mid);
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return largestMinDistance;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int N, C;
        cin >> N >> C;

        vector<int> stalls(N);
        for (int i = 0; i < N; ++i) {
            cin >> stalls[i];
        }

        sort(stalls.begin(), stalls.end());

        int result = largestMinimumDistance(stalls, C);
        cout << result << endl;
    }

    return 0;
}
