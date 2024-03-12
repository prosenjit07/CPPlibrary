#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int arr[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> arr[i];
        }
        int i = 0;
        if (arr[i] == arr[i + 1])
        {
            cout << arr[i + 2];
        }
        else if (arr[i] == arr[i + 2])
        {
            cout << arr[i + 1];
        }
        else
        {
            cout << arr[i];
        }
        cout << endl;
    }
    return 0;
}