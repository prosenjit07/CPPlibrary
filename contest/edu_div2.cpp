#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int k, q;
        cin >> k >> q;

        vector<int> a(k);
        for (int i = 0; i < k; ++i) {
            cin >> a[i];
        }

        vector<int> n(q);
        for (int i = 0; i < q; ++i) {
            cin >> n[i];
        }

        vector<int> winners(q, 0);

        for (int i = 0; i < q; ++i) {
            int players_left = n[i];
            int round = 0;

            while (players_left > 0) {
                int players_kicked_out = min(a[round % k], players_left);
                players_left -= players_kicked_out;
                round++;
            }

            winners[i] = n[i] - round;
        }

        for (int i = 0; i < q; ++i) {
            cout << winners[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
