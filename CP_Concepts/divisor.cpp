#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n; // n=10
    vector<int> v;

    for (int i = 1; i <= (sqrt(n)); i++) // i=1 to 3
    {
        if (n % i == 0) // i=1
        {
            v.push_back(i); // 1
            if (n / i != i) //
            {
                v.push_back(n / i); // 10
            }
        }
    }
    // v =1,10,2,5
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    return 0;
}
