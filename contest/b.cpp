#include <bits/stdc++.h>
using namespace std;
int main()
{
    string input;
    getline(cin, input);
    vector<int> numbers;

    istringstream iss(input);
    int num;
    while (iss >> num)
    {
        numbers.push_back(num);
    }

    for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i] << endl;
    }

    return 0;
}
