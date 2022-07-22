#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
    Pair ininialization syntext:
    pair (data_type1, data_type2) Pair_name (value1, value2) ;
    pair  g2(1, 'a');  //initialized,  different data type
    pair  g3(g2);      //copy of g2
    */
    pair<int, char> PAIR1;
    pair<string, double> PAIR2("APC", 6.8);
    pair<string, double> PAIR3;

    PAIR1.first = 100;
    PAIR1.second = 'G';

    PAIR3 = make_pair("APC", 3.1416);

    // Print all pair elements
    cout << PAIR1.first << " ";
    cout << PAIR1.second << endl;

    cout << PAIR2.first << " ";
    cout << PAIR2.second << endl;

    cout << PAIR3.first << " ";
    cout << PAIR3.second << endl;
    // swap between pair2 and pair 3
    PAIR2.swap(PAIR3);

    cout << "\nAfter swapping:\n";
    cout << "Contents of pair2 = " << PAIR2.first << " "
         << PAIR2.second << endl;
    cout << "Contents of pair3 = " << PAIR3.first << " "
         << PAIR3.second << endl;

    //  ***TIE***
    pair<int, int> pair1 = {1, 2};
    int a, b;
    tie(a, b) = pair1;
    cout << a << " " << b << "\n";

    pair<int, int> pair2 = {3, 4};
    tie(a, ignore) = pair2;
    // prints old value of b
    cout << a << " " << b << "\n";

    // Illustrating pair of pairs
    pair<int, pair<int, char>> pair3 = {3, {4, 'a'}};
    int x, y;
    char z;
    // tie(x,y,z) = pair3; Gives compilation error
    // tie(x, tie(y,z)) = pair3; Gives compilation error
    // Each pair needs to be explicitly handled
    x = pair3.first;
    tie(y, z) = pair3.second;
    cout <<"X = "<<x<<", "<<"Y = "<<y << ", " <<"Z = "<< z <<endl;
    return 0;

}