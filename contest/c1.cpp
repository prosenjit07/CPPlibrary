#include <iostream>

using namespace std;

int findPositionOfOne(int n) {
  if (n == 1) { // Base case: when array length is 1, 1 is at position 1
    return 1;
  }

  // Find the rightmost set bit using Brian Kernighan's algorithm
  int k = n;
  k &= -k; // Isolates the rightmost set bit

  // Count the leading zeros (number of positions shifted)
  int count = 0;
  while (k > 0) {
    count++;
    k >>= 1; // Right shift by 1 to check the next bit
  }

  // Return n minus the number of positions shifted
  // Correction: Check if count is equal to the number of bits in the binary representation of n
  if (count == sizeof(int) * 8) {
    return 1; // Edge case: all bits are set (n is the maximum power of 2)
  }
  return n - (1 << (count - 1));
}

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    int positionOfOne = findPositionOfOne(n);
    cout << positionOfOne << endl;
  }

  return 0;
}
