#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // p[i] =  how much ml of orange juice
    int p[n];
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        x = x * 10;
        p[i] = x;
    }
    // we calculate total orange juice

    int tot_orange = 0;
    for (int i = 0; i < n; i++)
    {
        tot_orange += p[i];
    }

    double x = tot_orange * 100.00;
    //  / we calculate total orange juice

    int tot_vol = n * 1000; // integer

    // we calcuate total volume

    double res = (x / tot_vol);
    cout << res << endl;


}