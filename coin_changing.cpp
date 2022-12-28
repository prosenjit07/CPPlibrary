#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int total, N;
    cout << "Number of Taka available: " << endl;
    cin >> N;
 
    vector<int> coin(N);
    cout << "Input All Values of Taka: " << endl;
    for (int i = 0; i < N; i++)
    {
        int p;
        cin >> p;
        coin.push_back(p);
    }
 
    cout << "Enter total payment: " << endl;
    cin >> total;
 
    sort(coin.begin(), coin.end());
    reverse(coin.begin(), coin.end());
 
    int c, num[N], i = 0;
    while (total > 0 && i < N)
    {
        num[i] = 0;
        if (coin[i] <= total)
        {
            c = coin[i];
            num[i] = total / c;
            total -= (num[i] * c);
        }
        i++;
    }
    while (i < N)
    {
        num[i] = 0;
        i++;
    }
 
    cout << endl;
    for (i = 0; i < N; i++)
    {
        cout << num[i] << " Note(s) of " << coin[i] << " Taka" << endl;
    }
   
    return 0;
}
