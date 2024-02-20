#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define rep(i, n) for (int i = 0; i < n; i++)
#define repr(i, n) for (int i = n; i >= 0; i--)
#define F first
#define S second
#define pb push_back
#define si set<int>
#define vi vector<int>
#define gi greater<int>
#define vvi vector<vi>
#define pii pair<int, int>
#define vpi vector<pii>
#define vpp vector<pair<int, pii>>
#define mii map<int, int>
#define mpi map<pii, int>
#define spi set<pii>
#define endl "\n"
#define sz(x) ((int)x.size())
#define all(p) p.begin(), p.end()
#define ld long double
#define que_max priority_queue<int>
#define que_min priority_queue<int, vi, greater<int>>
#define bug(...) __f(#__VA_ARGS__, __VA_ARGS__)
#define print(a)          \
	for (auto x : a)      \
		cout << x << " "; \
	cout << endl
#define print1(a)    \
	for (auto x : a) \
	cout << x.F << " " << x.S << endl
#define print2(a, x, y)         \
	for (int i = x; i < y; i++) \
		cout << a[i] << " ";    \
	cout << endl
#define init(n, arr)            \
	int n;                      \
	cin >> n;                   \
	vi arr(n);                  \
	for (int i = 0; i < n; i++) \
	{                           \
		cin >> arr[i];          \
	}

bool isSorted(int arr[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		if (arr[i] > arr[i + 1])
		{
			return false;
		}
	}
	return true;
}
int att(int a, int b){
	
}
void solve()
{
	int n, m;
	cin >> n >> m;
	// vi arr(n);
	// rep(i, n)
	// {
	//     cin >> arr[i];
	// }
	if (n % 2 != 0 && m % 2 != 0)
	{
		cout << "No" << endl;
	}
	else
	{
		int x = max(n, m);
		int y = min(n, m);
		int p = 2 * y;
		int q = x / 2;

		int a = y;
		int b = 2 * q;
		int flag = 0;

		set<int>s1;
		set<int>s2;
		set<int>s3;
		s1.insert(p);
		s1.insert(q);
		s2.insert(a);
		s2.insert(b);
		s3.insert(n);
		s3.insert(m);

		if ((s1!=s3) || (s2!=s3))
		{
			cout << "Yes" << endl;
		}
		else
		{
			cout << "No" << endl;
		}
	}
}

int32_t main()
{
	int i = 1;
	int t;
	cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}