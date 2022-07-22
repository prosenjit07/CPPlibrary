//Standard Template Libary
#include <bits/stdc++.h>
using namespace std;
bool cmp(int a, int b){
   return a>b;
}
int main()
{
   int arr[] = {1, 2, 3, 4, 7};
   int a=5;
   int b=-6;
   cout<<max(a,b)<<endl;
   cout<<min(a,b)<<endl;
   //find max/min from an array
   cout << *min_element(arr, arr + 5) << endl;
   cout << *max_element(arr, arr + 5) << endl;

   //acending order sort
   sort(arr,arr+5);
   for(int i=0;i<5;i++)
   cout<<arr[i]<<" ";
   cout<<endl;
   //decending order
   sort(arr,arr+5,cmp);
    for(int i=0;i<5;i++)
   cout<<arr[i]<<" ";

   //binary search
   sort(arr,arr+5);
   int n;
   cout<<"Which element you search?"<<endl;
   cin>>n;
   if(binary_search(arr,arr+5,n))
   cout<<"Yes"<<endl;
   else
   cout<<"Not found"<<endl;

   //upper bound(searching value's upper value)
   int x;
   cin>>x;
   sort(arr,arr+5);
   cout<<*upper_bound(arr,arr+5,x)<<endl;
   //lower bound(searching value's lower value)
   cout<<*lower_bound(arr,arr+5,x)<<endl;

  //swaping
  swap(a,b);
  cout<<a<<" "<<b<<endl;
  //absulate value
  cout<<abs(a)<<endl;

   // set 
   //if dublicate value is insert it delete all dublicate value
  set<int> st;
  int num;
  for(int i=0;i<5;i++){
      cin>>num;
      st.insert(num);
  }
  st.insert(9);
  for(auto i: st){
       cout<<i<<" ";
  }
}