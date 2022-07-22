#include <bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   cin>>s;
   //add extra char in a string
   s+='a';
   cout<<s<<endl;
   char str1[10] = "Hello";
   char str2[10] = "World";
   char str3[10];
   string str;
   getline(cin, str);
   cout << str << endl;
   cin.getline(str3, sizeof(str3));
   cout << str3 << endl;
   // copy str1 into str3
   strcpy(str3, str1);
   cout << "strcpy( str3, str1) : " << str3 << endl;
   // concatenates str1 and str2
   strcat(str1, str2);
   cout << "strcat( str1, str2): " << str1 << endl;
   // total lenghth of str1 after concatenation
   int len = strlen(str1);
   //int len = str1.length();
   cout << "strlen(str1) : " << len << endl;
   return 0;
}