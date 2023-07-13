#include <bits/stdc++.h>
using namespace std;
#define sort(s) sort(s.begin(), s.end())
#define sortarr(a) sort(a, a + n)
#define lint long long int
#define pb push_back
#define F first
#define S second
#define endl '\n'
#define Hello_Spidey()            \
    ios_base::sync_with_stdio(0); \
    cin.tie(0)
#define cin std::cin

int main()
{
    int y, w;
    cin >> y >> w;
    int mx = max(y, w);
    // win probability = (6-(x-1)/6) where x=max(y,w)
    if (mx == 1)
    {
        cout << "1/1" << endl;
    }
    else if (mx == 2)
    {
        cout << "5/6" << endl;
    }
    else if (mx == 3)
    {
        cout << "2/3" << endl;
    }
    else if (mx == 4)
    {
        cout << "1/2" << endl;
    }
    else if (mx == 5)
    {
        cout << "1/3" << endl;
    }
    else if (mx == 6)
    {
        cout << "1/6" << endl;
    }
}