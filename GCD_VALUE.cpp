#include <bits/stdc++.h>
using namespace std;

// Function to return gcd of a and b
int gcd(int a, int b)
{
	if (a == 0)
		return b;
	return gcd(b % a, a);
}

// Function to find gcd of array of numbers
int findGCD(int arr[], int n)
{
	int result = arr[0];
	for (int i = 1; i < n; i++)
		result = gcd(arr[i], result);

	return result;
}

int main()
{
	int n,x;
	cout<<"Enter the Element number to find GCD"<<endl;
	cin>>n;
	int arr[n];
    for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout << findGCD(arr, n) << endl;
	return 0;
}
 