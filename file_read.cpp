#include<bits/stdc++.h>
using namespace std;
int main(){
    string line;
    ifstream file("reader.txt");
    while(getline(file,line)){
        cout<< line<< endl;
    }
    file.close();
}
