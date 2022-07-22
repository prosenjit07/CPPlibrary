#include <bits/stdc++.h>
using namespace std;

int dec2bin(int num){
    int ar[20]; 
    int i;
     for(i = 0; num > 0;  i++) {
        ar[i] = num % 2; // Storing remainder in array
        num = num / 2;   // reducing number by 2
    }
  
    for(i=i-1;i>=0;i--){
        cout<<ar[i];
    }
}
int main() {
    int num;
    cin>>num;
    dec2bin(num);
    return 0;
}