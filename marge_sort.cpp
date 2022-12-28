#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int m, int r)
{
   int n1 = m - l + 1;
   int n2 = r - m;

   int L[n1], R[n2];

   for (int i = 0; i < n1; i++)
      L[i] = arr[l + i];

   for (int j = 0; j < n2; j++)
      R[j] = arr[m + 1 + j];

   int i = 0;
   int j = 0;
   int k = l;

   while (i < n1 && j < n2)
   {
      if (L[i] <= R[j])
      {
         arr[k] = L[i];
         i++;
      }
      else
      {
         arr[k] = R[j];
         j++;
      }
      k++;
   }
   while (i < n1)
   {
      arr[k] = L[i];
      i++;
      k++;
   }
   while (j < n2)
   {
      arr[k] = R[j];
      j++;
      k++;
   }
}

void mergeSort(int arr[], int l, int r)
{
   if (l >= r)
   {
      return;
   }

   int m = (l + r - 1) / 2;
   mergeSort(arr, l, m);//recursion
   mergeSort(arr, m + 1, r);
   merge(arr, l, m, r);
}

void printArray(int A[], int size)
{
   for (int i = 0; i < size; i++)
      cout << A[i] << " ";
}
int main()
{
   int n;
   cin >> n;
   int arr[n];
   for (int i = 0; i < n; i++)
   {
      cin >> arr[i];
   }
   cout << "Before the array is \n";
   printArray(arr, n);
   mergeSort(arr, 0, n);
   cout << "\nAfter the Sorted array is \n";
   printArray(arr, n);
   return 0;
}
