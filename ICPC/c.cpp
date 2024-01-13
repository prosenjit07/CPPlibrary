#include <iostream>
#include <vector>

using namespace std;

// Function to find and print the maximum subarray
void printMaximumSubarray(vector<int>& arr) {
    int n = arr.size();
    int maxSum = INT_MIN; // Initialize maxSum to a very small value
    int currentSum = 0;
    int start = 0; // Starting index of the current subarray
    int end = 0;   // Ending index of the current subarray
    int tempStart = 0; // Temporary starting index in case we need to update the subarray

    for (int i = 0; i < n; i++) {
        currentSum += arr[i];

        if (currentSum > maxSum) {
            maxSum = currentSum;
            start = tempStart;
            end = i;
        }

        if (currentSum < 0) {
            currentSum = 0;
            tempStart = i + 1;
        }
    }

    cout << "Maximum Subarray: ";
    for (int i = start; i <= end; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {1, 0,1,p};
    printMaximumSubarray(arr);
    return 0;
}
