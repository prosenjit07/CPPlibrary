#include<bits/stdc++.h>
//#include<fstream>
using namespace std;
int main () {
    string str;
    int num, pass;
    ofstream file;
    file.open("prosenjit_biswas.txt",ios::out|ios::app);
    cout<< "ENTER PERSON NUMBER" << endl;
    cin>> num;
    for(int i=0;i<num;i++){
         cout<< "ENTER YOUR DATA NO:" << i+1 << endl;
         cin.ignore();
         cout<<"Enter UserName:";
         getline(cin,str);
         file<< str << "\t";
         cout<<"Enter Password:";
         cin>>pass;
         file<< pass << endl;
         cout<<"Log In Succesfull\n"<< endl;
    }
    file.close();
    return 0;
}

