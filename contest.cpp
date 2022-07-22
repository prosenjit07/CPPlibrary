#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d, f, i, j, k, n, x, z, y, p;
    string s1, s2, s3, s4, s5;
    int e[4];
    cin >> a >> b;
    cout << a << " contributors," << b << " projects" << endl;
    for (i = 0; i < a; i++)
    {
        cin >> s1;
        cin >> n;
        cout << "contributor " << s1 << endl;
        for (j = 0; j < n; j++)
        {
            cin >> s2;
            cin >> c;
            cout << "has " << s2 << " skill at level " << c << endl;
        }
    }

    for (x = 0; x < b; x++)
    {
        cin >> s3;
        for (k = 0; k < 4; k++)
        {
            cin >> e[k];
        }
        y = e[3];
        cout << "project " << s3 << "needs " << y << " contributor" << endl;
        for (z = 0; z < y; z++)
        {
            cin >> s4;

            // first contributor needs to have HTML at level ≥ 3 (2 with mentoring)
            // second contributor needs to have C++ at level ≥ 2 (1 with mentoring)
            
            cin >> p;
            if (y = 2)
            {
                s5 = "first";
            }
            else if (y = 3)
            {
                s5 = "second";
            }
            else if (y = 4)
            {
                s5 = "third";
            }
            cout << s5 << " contributor needs to have " << s4 << " at level ≥" << p << "( " << y << "with mentoring)" << endl;
            y++;
        }
    }
}
