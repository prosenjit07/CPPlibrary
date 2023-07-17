#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<bool> snacks(n + 1, false);
    int missing = n; 

    for (int i = 0; i < n; i++) {
        int size;
        cin >> size;
        snacks[size] = true; 

        while (missing > 0 && snacks[missing]==true) {// If the snack is found, then output it
            cout << missing << " "; 
            missing--;
        }

        cout << endl;
    }

    return 0;
}
