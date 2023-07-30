#include <iostream>
using namespace std;
int main()
{
    cout<<"Enter the number :"<<endl;
    int n; cin>>n;
    int x = n & (n-1);
    int count=1;
    while(x!=0)
    {
        count++;
        x = x & (x-1);
    }
    cout<<count<<endl;
}