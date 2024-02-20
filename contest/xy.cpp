#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    if (t == 1)
        cout << 1 << endl;
    else if (t == 2)
        cout << 2 << endl;
    else if (t > 2)
    {
        int mid = t / 2 + 1;
        // cout<<mid;
        vector<int> arr;
        int ans = 0;
        int x = 0;
        for (int i = 1; i <= mid; i++)
        {
            if (ans == t)
            {
                break;
            }
           
            if (ans < t)
            {
                ans += i;
                arr.push_back(i);
                 if (ans > t)
            {
                auto it = arr.begin() + x - 1;
                arr.erase(it);
            }
            }
            x++;
        }
        for (int i = 0; i < arr.size(); i++)
        {
            cout << arr[i] << endl;
        }
    }
}