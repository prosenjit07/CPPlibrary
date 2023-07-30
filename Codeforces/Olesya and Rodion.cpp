// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	int n,t;
// 	cin>>n>>t;
// 	if(n==1&&t==10)
// 	{
// 		cout<<"-1";
// 	}
// 	else if(n>=2&&t==10)
// 	{
// 		for(int i=1;i<n;i++)
// 		cout<<"1";
// 		cout<<"0";
// 	}
// 	else for(int i=0;i<n;i++) cout<<t;
// }

#include <iostream>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;

    // If t is greater than 1 and n is 1, there is no number satisfying the conditions.
    if (t > 1 && n == 1)
    {
        cout << -1 << endl;
        return 0;
    }

    // Find the smallest n-digit number that is divisible by t.
    string number;
    if (t == 10)
    {
        // If t is 10, the smallest n-digit number is a string of n '1's.
        number = string(n - 1, '1') + '0';
    }
    else
    {
        // Otherwise, the number can start with 1 followed by (n - 1) '0's.
        number = "1" + string(n - 1, '0');

        // Now, we need to find the last digit such that the entire number is divisible by t.
        // We can try all digits from 0 to 9 for the last digit.
        bool found = false;
        for (int lastDigit = 0; lastDigit <= 9; lastDigit++)
        {
            int num = stoi(number);
            if (num % t == 0)
            {
                found = true;
                break;
            }
            number[n - 1] = '0' + lastDigit;
        }

        // If no valid number is found, output -1.
        if (!found)
        {
            cout << -1 << endl;
            return 0;
        }
    }

    cout << number << endl;
    return 0;
}
