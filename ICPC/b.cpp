#include <iostream>
#include <vector>

using namespace std;

// Function to count non-beautiful subarrays
int countNonBeautifulSubarraysDP(vector<int>& arr) {
    int n = arr.size();
    int dp[n][n];

    // Initialize the DP table
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            dp[i][j] = 0;
        }
    }

    // Iterate over the subarrays
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            // Check if the current subarray is beautiful
            bool isBeautiful = true;
            for (int k = i; k <= j; k++) {
                if (arr[k] != arr[i]) {
                    isBeautiful = false;
                    break;
                }
            }

            // If the current subarray is not beautiful, count it
            if (!isBeautiful) {
                dp[i][j] = 1;

                // Count the non-beautiful subarrays of the left and right subarrays
                dp[i][j] += dp[i][j - 1] + dp[i + 1][j] - dp[i + 1][j - 1];
            }
        }
    }

    // Return the total number of non-beautiful subarrays
    return dp[0][n - 1];
}

int main() {
    int T;
    cin >> T;

    for (int caseNumber = 1; caseNumber <= T; caseNumber++) {
        int N;
        cin >> N;
        vector<int> A(N);

        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        int result = countNonBeautifulSubarraysDP(A);
        cout << "Case " << caseNumber << ": " << result << endl;
    }

    return 0;
}
