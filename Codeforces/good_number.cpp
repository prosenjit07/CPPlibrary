#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int n, k, x, counter = 0;
    cin >> n >> k;
    bool flag;
    while (n--)
    {
        cin >> x;
        vector<int> freq(10, 0);
        flag = true;
        while (x > 0)
        {
            freq[int(x % 10)]++;
            x /= 10;
        }
        for (int i = 0; i < k + 1; i++)//k(k=0...k)
        {
 
            if (freq[i] == 0)
            {
                flag = false;
            }
        } 
 
        if (flag)
            counter++;
            cout<<counter<<endl;
    }
    cout << counter;
    return 0;
}

// #include <iostream>
// #include <string>

// using namespace std;

// bool is_good(int n, int k)
// {
//   bool is = true;
//   string s = to_string(n);
//   int d = 0;
//   for (int i = 0; i <= k; i++)
//   {
//     if (s.find(to_string(i)) == -1)
//     {
//       is = false;
//       break;
//     }
//   }
//   return is;
// }

// int main()
// {
//   int n, k;
//   cin >> n >> k;
//   int c = 0;
//   while (n--)
//   {
//     int m;
//     cin >> m;
//     if (is_good(m, k))
//       c += 1;
//   }
//   cout << c;
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     int n, k, x, counter = 0;
//     cin >> n >> k;
//     while (n--)
//     {
//         cin >> x;
//         vector<int> digitCount(10, 0); // Count the frequency of each digit (0-9).
//         int uniqueDigitCount = 0;      // Count of unique digits in x.
//         while (x > 0)
//         {
//             int digit = x % 10;
//             digitCount[digit]++;
//             if (digitCount[digit] == 1)
//             {
//                 uniqueDigitCount++;
//             }
//             x /= 10;
//         }
//         if (uniqueDigitCount > k)
//         {
//             counter++;
//         }
//     }
//     cout << counter << endl;
//     return 0;
// }
