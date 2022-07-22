#include <bits/stdc++.h>
using namespace std;

int numDigits(long long number)
{
    int digits = 0;

    while (number)
    {
        number /= 10;
        digits++;
    }

    return digits;
}
int main()
{
    int n;
    long long x, y, valor, z;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        z = numDigits(y);
        z = ceil(pow(10, z));
        valor = x % z;
        printf("%sn", (valor == y) ? "encaixa" : "nao encaixa");
    }
    return 0;
}