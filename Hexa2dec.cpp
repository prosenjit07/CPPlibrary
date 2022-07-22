// C++ program to convert hexadecimal to decimal
#include <bits/stdc++.h>
using namespace std;

int h2d(string hexVal)
{
//hex= A6
  // Initializing base value to 1, i.e 16^0
  int base = 1;
  int dec_val = 0;

  // Extracting characters as digits from last character
  for (int i = hexVal.size() - 1; i >= 0; i--)
  {
    // it to integral 0-9(48 to 57) by subtracting 48 from  ASCII value
    if (hexVal[i] >= '0' && hexVal[i] <= '9')
    {
      dec_val += ((hexVal[i])-48 ) * base;//dec_val=(54-48)*1 = 6

      // incrementing base by power
      base = base * 16;
    }

    // if character lies in 'A'-'F' , converting
    // it to integral 10 - 15 by subtracting 55 from ASCII value
    else if (hexVal[i] >= 'A' && hexVal[i] <= 'F')
    {
      dec_val += ((hexVal[i]) - 55) * base;

      // incrementing base by power
      base = base * 16;
    }
  }
  return dec_val;
}

int main()
{
  string hexNum;
  cin >> hexNum;
  cout << (h2d(hexNum));
  return 0;
}
/*
#include <iostream>
#include <string.h>
using namespace std;
// convert hexadecimal to decimal

int hex2dec(string n)
{
  int ans = 0;
  int x = 1;
  for (int i = n.size()-1; i >= 0; i--){
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
  string n;
  cin >> n; // A2
  cout << hex2dec(n) << endl;
  return 0;
}
*/