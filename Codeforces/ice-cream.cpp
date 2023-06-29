#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
#define rep(i,n) for(int i=0;i<n;i++)
#define repr(i,n) for(int i=n;i>=0;i--)
#define F first
#define S second
#define pb push_back
#define si set <int>
#define vi vector <int>
#define gi greater <int>
#define vvi vector <vi>
#define pii pair <int,int>
#define vpi vector <pii>
#define vpp vector <pair <int,pii>>
#define mii map <int,int>
#define mpi map <pii,int>
#define spi set <pii>
#define endl "\n"
#define sz(x) ((int) x.size())
#define all(p) p.begin(), p.end()
#define ld long double
#define que_max priority_queue <int>
#define que_min priority_queue <int ,vi ,greater <int> >
#define bug(...) __f(#__VA_ARGS__, __VA_ARGS__)
#define print(a) for(auto x: a) cout << x << " "; cout << endl
#define print1(a) for(auto x: a) cout << x.F << " " << x.S << endl
#define print2(a,x,y) for(int i=x;i<y;i++) cout << a[i] << " "; cout << endl
#define init(n,arr) int n;cin>>n;vi arr(n);for(int i=0;i<n;i++) {cin>>arr[i];}


// template <typename Arg1>
// void __f (const char* name,Arg1 && arg1) { cout << name << " : " << arg1 << endl; }
// template <typename Arg1, typename... Args>
// void __f(const char* names,Arg1 && arg1,Args&&... args){
//  const char* comma = strchr (names + 1, ',');
//  cout.write (names, comma - names) << " : " << arg1 << " | "; __f (comma + 1, args...);
// }
// const int M = 1e9 + 7;
 
void solve(){
    int n;
    cin>>n;
    vi arr(n);
    rep(i,n){
        cin>>arr[i];
    }
}
 
int32_t main(){
    int i = 1;
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
