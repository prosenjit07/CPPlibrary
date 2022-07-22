#include <bits/stdc++.h>
using namespace std;

int main()
{
	//***vector initialization***
	vector<int> v;
	/* to define vector size
	 vector<int> v(5);
	*/
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	/*
	  //vector input will continue when it give input as int value 
	  //if not give int value it automattically stop give input
	  int p;
      while(cin>>p){
	  v.push_back(p);
      }
	*/

	// vector size print
	cout << v.size() << endl;
	cout << "Capacity : " << v.capacity();
	cout << "\nMax_Size : " << v.max_size();
	// Vector resize(3 to 5)
	v.resize(5);
	// Check Vector is empty or not(if empty output:1, otherwise output: 0)
	cout << "is it empty?" << v.empty() << endl;

	// fill the array with 10 five times
	v.assign(5, 10);

	// ***Print all vector elements***
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	/*Another approach
	//for range
	for(int element: v)
	   cout << element  << "\t";
	*/

	// print fornt and back element
	cout << "\nfront() = " << v.front();
	cout << "\nback()  = " << v.back();

	// delete 2nd element
	v.erase(v.begin() + 1);
	cout << " " << endl;
	cout << "After 2nd index delete " << endl;
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	// removes last element
	v.pop_back();

	// inserts 5 at the beginning
	v.insert(v.begin(), 5);
	// insert an element in position 2
	v.insert(v.begin() + 1, 8);

	cout << " " << endl;
	cout << "After 2nd index insert " << endl;
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << " " << endl;

	// reverse all vector begin to end
	reverse(v.begin(), v.end());
	cout << "After Reverse" << endl;
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	/*
	//Another approach to reverse
	cout<<"reverse"<<endl;
	 for (int i = v.size()-1; i >=0; i--)
	{
		cout << v[i] << " ";
	}
	*/
	cout << " " << endl;

	//***sorting vector in accending order***
	sort(v.begin(), v.end());
	/*sort in decending order
	sort(v.begin(), v.end());
	reverse(v.begin(), v.end());*/
	cout << "After Sort" << endl;
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}

	// clear all vector elements
	v.clear();
	cout << " " << endl;
	cout << "is it empty?" << v.empty() << endl;
	cout << endl;

	//***two vector to perform swap***
	vector<int> v1, v2;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v2.push_back(4);
	v2.push_back(5);
	v2.push_back(6);

	cout << "\nBefore Swap \nVector 1: ";
	for (int i = 0; i < v1.size(); i++)
		cout << v1[i] << " ";

	cout << "\nVector 2: ";
	for (int i = 0; i < v2.size(); i++)
		cout << v2[i] << " ";

	// Swaps v1 and v2
	v1.swap(v2);

	cout << "\nAfter Swap \nVector 1: ";
	for (int i = 0; i < v1.size(); i++)
		cout << v1[i] << " ";

	cout << "\nVector 2: ";
	for (int i = 0; i < v2.size(); i++)
		cout << v2[i] << " ";

	return 0;
}