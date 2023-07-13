// Find all triplets with zero sum
 #include <bits/stdc++.h>
 using namespace std;

void solve(int ar[], int n)
{
    for (int i = 0; i < n; i++)
    {
        unordered_set<int> s;
        for (int j = i + 1; j < n; j++)
        {
            int x = -(ar[i] + ar[j]);
            //x = -(5)
            //if set 5 is present then sum=0
            if (s.find(x) != s.end())// x is present in this set
            {
                cout << "(" << x << "=" << ar[i] << "," << ar[j] << ")" << endl;
            }
            else
            {
                s.insert(ar[j]);
            }
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int ar[n + 3];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    solve(ar, n);
}

// complexity: O(n^2)

/*
//Find a triplet that sum to a given value
#include <bits/stdc++.h>
using namespace std;

void solve(int ar[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        unordered_set<int> s;
        for (int j = i + 1; j < n; j++)
        {
            int sum = (ar[i] + ar[j]);
            int dif = (x - sum);
            // x = -(5)
            // if set 5 is present then sum=0
            if (s.find(dif) != s.end()) // x is present in this set
            {
                cout << "(" << x << "=" << ar[i] << "," << ar[j] << "," << dif << ")" << endl;
            }
            else
            {
                s.insert(ar[j]);
            }
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int ar[n + 3];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    int x;
    cin >> x;
    solve(ar, n, x);
}

//Another Approach

#include<bits/stdc++.h>
using  namespace  std;

void solve(int ar[],int n,int x)
{
    int aa=0;
    for(int i=0;i<n;i++)
    {
        int l=i+1;
        int r=n-1;
        while(l<r)
        {
            int sum=ar[i]+ar[l]+ar[r];
            if(sum==x)
            {
                cout<<"("<<ar[i]<<","<<ar[l]<<","<<ar[r]<<")"<<endl;
                aa=1;
            }
            if(sum>x)r--;
            else l++;
        }
    }
    if(aa==0)cout<<"Triplate is not Found"<<endl;
}
int main()
{
    int n;
    cin>>n;
    int ar[n+3];
    for(int i=0;i<n;i++)cin>>ar[i];
    sort(ar,ar+n);
    int x;
    cin>>x;
    solve(ar,n,x);
}
*/