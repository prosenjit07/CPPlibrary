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
    int a, b;
    cin >> a >> b;
    int ct = 0;
    int i = 0;

    while (true)
    {
        i++;
        if ((a * i) % 10 == 0 || (a * i) % 10 == b)
        {
            cout << i << endl;
            break;
        }
    }
}