#include<bits/stdc++.h>
using namespace std;
    class student
     {
        public:
        int id;
        double gpa;
     };
    class details
    {
       public:
       int age;
       int semister;
      //using fuction or medhod
       void display()
       {
          cout<< "AGE: "<<age<<" "<<"SEMISTER: " <<semister <<endl;
       }
      //using fuction or medhod
       void input()
       {
         cout<<"AGE: "<< endl;
         cin>>age;
         cout<<"SEMISTER: "<<endl;
         cin>>semister;
       }
      //adding parametrized function to the class
       void set_value(int x, int y)
       {
         age=x;
         semister=y;
       }
    };

     int main()
     {
        student jit,prosenjit;
        details roy;
        jit.id=68;
        jit.gpa=3.95;
        prosenjit.id=69;
        prosenjit.gpa=4;
        cout<< "ID: "<<jit.id<<" "<<"Gpa: " <<jit.gpa <<endl;
        cout<< "ID: "<<prosenjit.id<<" "<<"Gpa: " <<prosenjit.gpa <<endl;
        roy.input();
        roy.display();
        roy.set_value(22,5);
        roy.display();
        return 0;
     }

