#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long decimal_num = 0; // final decimal number
    string binary;   
    cout<<"Enter Binary Number"<<endl;
    cin >> binary;
    
    reverse(binary.begin(), binary.end());//reverse binary number 
    int size = binary.size();
    for (int i = 0; i < size; i++)
    {
        if (binary[i] == '1')
        {
            decimal_num += pow(2, i);
        }
    }
    cout << "Decimal Number is: " << decimal_num << endl;
    return 0;
}


/*
Another Code:
//Suppose n=1010
int bintoDec(int n)
{
    int ans = 0;
    int x = 1;
    while (n > 0)
    {
        //y=last digit
        int y = n % 10;    //y=0,1,0,1,10,10
        ans += x * y;      //ans=0,2,2,10
        x*= 2;            //x=2,4,8,16
        //n=previous all digit of y
        n /= 10;           //101,10,1,0(break)
    }
    return ans;
}
int main()
{  
    int n;
    cin >> n;
    cout << bintoDec(n) << endl;
    return 0;
}
*/