//Phythagorean Triplet(c^2=a^2+b^2)
#include <bits/stdc++.h>
using namespace std;
//bool return type
bool check(int x, int y, int z)
{
    int a = max(x, max(y,z));
    //highest value=max(first,secound);
    int b,c;
    if(a==x){
        b=y;
        c=z;
    }
    else if(a==y){
      b=x;
      c=z;
    }
    else{
        b=x;
        c=y;
    }
    if(a*a == b*b + c*c){
       return true;
    }
    else{
       return false;
    }
}
int main()
{
///////////////////Jit/////////////////
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
///////////////////Roy/////////////////
    
    int x,y,z;
    cin>>x>>y>>z;
    if(check(x,y,z)){
        cout<<"Phythagorean Triplet";
    }
    else{
        cout<<"Not a Phythagorean Triplet";
    }
}
  