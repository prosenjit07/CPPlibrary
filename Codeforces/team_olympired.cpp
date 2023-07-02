#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, t1[5000], t2[5000], t3[5000], x = 0, y = 0, z = 0, w, s;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            t1[x] = i + 1;
            x++;
        }
        else if (a[i] == 2)
        {
            t2[y] = i + 1;
            y++;
        }
        else if (a[i] == 3)
        {
            t3[z] = i + 1;
            z++;
        }
    }
    s = min(x, y);
    w = min(s, z);
    printf("%d\n", w);
    for (x = 0, y = 0, z = 0; x < w, y < w, z < w; x++, y++, z++)
    {
        printf("%d %d %d\n", t1[x], t2[y], t3[z]);
    }
    return 0;
}