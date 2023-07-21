#include <bits/stdc++.h>
using namespace std;

void printNumbersFrom1ToN(int n)
{
    if (n > 1)
    {
        printNumbersFrom1ToN(n - 1);
    }
    cout << n << " ";
}

void printNumbersFromNto1(int n)
{
    cout << n << " ";
    if (n > 1)
    {
        printNumbersFromNto1(n - 1);
    }
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "1 to " << n << ": ";
    printNumbersFrom1ToN(n);
    cout << endl;

    cout << "Num from " << n << " to 1: ";
    printNumbersFromNto1(n);
    cout << endl;

    return 0;
}
