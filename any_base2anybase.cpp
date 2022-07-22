#include <bits/stdc++.h>
using namespace std;

// dec to any number
char reVal(int num)
{
    if (num >= 0 && num <= 9)
        return (char)(num + '0');
    else
        return (char)(num - 10 + 'A');
}

// Utility function to reverse a string
void strev(char *str)
{
    int len = strlen(str);
    int i;
    for (i = 0; i < len / 2; i++)
    {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

// Function to convert a given decimal number
// to a base 'base' and
char *fromDeci(char res[], int base, int inputNum)
{
    int index = 0; // Initialize index of result

    // Convert input number is given base by repeatedly
    // dividing it by base and taking remainder
    while (inputNum > 0)
    {
        res[index++] = reVal(inputNum % base);
        inputNum /= base;
    }
    res[index] = '\0';

    // Reverse the result
    strev(res);

    return res;
}

// any num to dec

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
// Hexa to Decimal
int hex2dec(string n)
{
    int ans = 0;
    int x = 1;
    int s = n.size();
    for (int i = s - 1; i >= 0; i--)
    {
        if (n[i] >= '0' && n[i] <= '9')
        {
            ans += x * (n[i] - '0');
        }
        else if (n[i] >= 'A' && n[i] <= 'F')
        {
            ans += x * (n[i] - 'A' + 10);
        }
        x *= 16;
    }
    return ans;
}

int main()
{
    int n, base, base2, inputNum;
    cin >> base;

    if (base == 16)
    {
        string n;
        cin >> n;
        inputNum = hex2dec(n);
    }
    else
    {
        cin >> n;
        inputNum = bintoDec(base, n);
    }
    ///////////////////////////
    cin >> base2;
    char res[100];

    cout << fromDeci(res, base2, inputNum);

    return 0;
}