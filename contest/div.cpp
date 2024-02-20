#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int w, h;
        cin >> w >> h;

        int a = w / 2;
        int b = h / 2;

        if (h % 2 == 0 || w % 2 == 0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
        
    }

    return 0;
}
