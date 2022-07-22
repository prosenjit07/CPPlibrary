#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
#endif

        float l, r, w, s, result, score, b;  
        int a;
        cin >> l >> r >> w >> s;
        result = ((l + r + w + s) / 4);
        a = int(result);
        b = result - a;
        if (b < 0.25)
                score = a;
        else if (b >= 0.25 && b < 0.75)
                score = a + 0.5;
        else if (b <= 0.75)
                score = a + 1;
        cout << fixed << setprecision(1) << score << endl;
}