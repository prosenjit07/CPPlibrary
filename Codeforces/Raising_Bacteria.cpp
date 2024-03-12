#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long ans = 0;
    while (n != 0) {
        long long rem = n % 2; // Get the remainder of the num when divided by 2
        if (rem == 1) {
            ans++; // Increment the ans if the remainder is 1, indicating an odd number
        }
        n = n / 2; // Divide the number by 2, as each bacterium doubles every night
    }
    cout << ans;
    return 0;
}


//using bitwise operator

// #include <iostream>

// using namespace std;

// int main() {
//     long long x;
//     cin >> x;

//     // Initialize the answer to 0
//     int ans = 0;

//     // Find the leftmost set bit in the binary representation of x
//     while (x) {
//         // Increment the answer since we encountered a set bit
//         ans++;

//         // Clear the rightmost set bit
//         x &= (x - 1);
//     }

//     cout << ans << endl; // Output the answer
//     return 0;
// }
