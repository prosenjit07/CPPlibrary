#include <bits/stdc++.h>
using namespace std;
//others to Decimal
int bintoDec(int base, int n)
{
    int ans = 0;
    int x = 1;
    while (n > 0)
    {
        // y=last digit
        int y = n % 10; // y=0,1,0,1,10,10
        ans += x * y;   // ans=0,2,2,10
        x *= base;      // x=2,4,8,16
        // n=previous all digit of y
        n /= 10; // 101,10,1,0(break)
    }
    return ans;
}
//Hexa to Decimal
int hex2dec(string n)
{
    int ans = 0;
    int x = 1;
    int s = n.size();
    for (int i = s - 1; i >= 0; i--)
        if (n[i] >= '0' && n[i] <= '9')
        {
            ans += x * (n[i] - '0');
        }
        else if (n[i] >= 'A' && n[i] <= 'F')
        {
            ans += x * (n[i] - 'A' + 10);
        }
    x *= 16;
    return ans;
}
int main()
{
    int n, base;
    cout << "Enter the base which you convert to decimal?" << endl;
    cin >> base;
    if (base == 16)
    {
        string n;
        cin>>n;
        cout << "Enter the number?" << endl;
        cout << hex2dec(n) << endl;
    }
    else
    {
        cout << "Enter the number?" << endl;
        cin >> n;
        cout << bintoDec(base, n) << endl;
    }
    return 0;
}