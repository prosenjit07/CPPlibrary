#include <iostream>
using namespace std;
 
void permutations(string str, int i, int n)
{
    // base condition
    if (i == n - 1)
    {
        cout << str << endl;
        return;
    }
 
    // process each character of the remaining string
    for (int j = i; j < n; j++)
    {
        swap(str[i], str[j]); 
 
        // recur for substring `str[i+1, n-1]`
        permutations(str, i + 1, n);
 
        // backtrack (restore the string to its original state)
        swap(str[i], str[j]);
    }
}
 
int main()
{
    string str = "ABC";
    permutations(str, 0, str.length());
 
    return 0;
}
/*output:
ABC
ACB
BAC
BCA
CBA
CAB
*/