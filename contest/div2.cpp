#include<bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, n) for (int i = 1; i < (n); ++i)
#define rep1n(i, n) for (int i = 1; i <= (n); ++i)
#define rep01n(i, n) for (int i = 0; i <= (n); ++i)
#define repr(i, n) for (int i = (n) - 1; i >= 0; --i)
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define csp(n) cout << n << " ";
#define cend(n) cout << n << endl;
#define cendl cout << endl;

typedef long long ll;
const ll mod = 1e9+7;
const ll p = mod;
using namespace std;

ll n,m,t,k,x;
ll a[200005];

bool seg_can(ll l, ll r){
	bool can = true;
	for(int i = l + 1;i <= r;i++){
		if(a[i] < a[i - 1])can = false;
	}
	return can;
}
void sol(){
	cin>>n;
	rep(i,n)cin>>a[i];
	ll st = 1;
	ll le = 1;
	bool can = true;
	while(st <= n - 1){
		if(!seg_can(st, min(st + le - 1, n - 1))){
			can = false;
		}
		st += le;
		le *= 2;
	}
	if(can)yes;
	else no;
	
}
int main() {
	cin>>t;
	while(t--)sol();
	return 0;
}