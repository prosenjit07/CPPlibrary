#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long decimal_num = 0; // final decimal number
    int dec; 
    int n; 
    //cout<<"Enter Decimal Number"<<endl;
    cin >> dec;//dec=10
    int x=dec/2;
    while(x/2==0){
    n=dec%2; //n=0
    x=n/2; //x=5
    cout<<n<<endl;
    }
    //cout << "Binary Number is: "  << bin_num << endl;
    return 0;
}
