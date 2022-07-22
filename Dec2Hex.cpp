#include <bits/stdc++.h>
using namespace std;

char dec2hex(int dec)
{
    char hex[100];
   
    int i = 0;
    while (dec != 0)
    {
        int rem = 0;
        // storing remainder in temp variable.
        rem = dec % 16;
        if (rem < 10)
        {
            hex[i] = rem + '0';
            //or we can write this: hexaDeciNum[i] = temp + 48;
            i++;
        }
        else if (rem >= 10 && rem <= 15)
        {
            hex[i] = rem + 'A' - 10;
             //or we can write: hexaDeciNum[i] = temp + 55;
            i++;
        }
        dec /= 16;
    }
//reverse 
    for (int j = i - 1; j >= 0; j--)
    {
        cout << hex[j];
    }
}

int main()
{
    int dec;
    cin >> dec;
    dec2hex(dec);
    return 0;
}
/*
#include <iostream>
using namespace std;
void decToHexa(int n)
{
	char hexaDeciNum[100];

	int i = 0;
	while (n != 0) {
		// temporary variable to store remainder
		int temp = 0;
		// storing remainder in temp variable.
		temp = n % 16;

		if (temp < 10) {
            hexaDeciNum[i] = temp + '0';
            //or we can write this: hexaDeciNum[i] = temp + 48;
			i++;
		}
		else {
			//hexaDeciNum[i] = temp + 55;
            //or we can write
            hexaDeciNum[i] = temp + 'A'-10;
			i++;
		}
		n = n / 16;
	}
	// output hexadecimal number array in reverse order
	for (int j = i-1; j >= 0; j--)
		cout << hexaDeciNum[j];
}

int main()
{
	int n;
    cin>>n;
	decToHexa(n);
	return 0;
}
*/