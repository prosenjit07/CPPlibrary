/*
Input:
1
22
322
Output:
nao encaixa
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long int a, b;
    cin>>n;
    while (n--)
    {
        cin>>a>>b;
        if (a >= b)
        {
            while (b != 0)
            {
                if (b % 10 != a % 10)
                {
                    printf("nao encaixa\n");
                }
                a /= 10;
                b /= 10;
            }
            printf("encaixa\n");
        }
        else
        {
            printf("nao encaixa\n");
        }
    }
    return 0;
}