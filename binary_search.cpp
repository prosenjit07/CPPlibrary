#include <bits/stdc++.h>
using namespace std;

int binarySearch(int array[], int x, int low, int high)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (array[mid] == x)
            return mid;

        if (array[mid] < x)
            low = mid + 1;

        else
            high = mid - 1;
    }
    return -1;
}

int main()
{
    int n, x;
    cout<<"Enter the number of elements?"<<endl;
    cin >> n;
    int array[n];
     cout<<"Enter the elements?"<<endl;
    for (int i = 0; i < n; i++)
        cin >> array[i];

    sort(array, array+n);
    //for decending sort
    // sort(arr, arr + n, greater<int>());
    cout<<"After sorting in acending order:"<<endl;
    for (int i = 0; i < n; i++)
    cout<<array[i]<<" ";
    cout<<"\nWhich element you want to seach?"<<endl;
    cin >> x;
    int result = binarySearch(array, x, 0, n - 1);
    if (result == -1)
        printf("Not found");
    else
        cout <<"Element is found at index: " <<result+1<< endl;
    return 0;
}

/*
//Binary search using quick sorting
#include <bits/stdc++.h>
using namespace std;

int N, A[9999], temp;

int Partition(int A[], int p, int r)
{
    int x = A[r], i = p - 1;
    for (int j = p; j <= r - 1; j++)
    {
        if (A[j] <= x)
        {
            i = i + 1;
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    }
    temp = A[i + 1];
    A[i + 1] = A[r];
    A[r] = temp;
    return i + 1;
}

void QuickSort(int A[], int p, int r)
{
    if (p < r)
    {
        int q = Partition(A, p, r);
        if (q > 1)
            QuickSort(A, p, q - 1);
        if (q < N)
            QuickSort(A, q + 1, r);
    }
}

int binarySearch(int A[], int p, int r, int key)
{
    int left = p, right = r, mid;
    while (left < right)
    {
        mid = (left + right) / 2;
        if (A[mid] == key)
            return mid;
        else if (A[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }
    if (A[mid] == key)
        return mid;
    else if (A[left] == key)
        return left;
    else if (A[right] == key)
        return right;
    else
        return -1;
}

int main()
{
    cout << "Enter the number of array size?" << endl;
    cin >> N;
    cout << "Enter Numbers: " << endl;
    for (int i = 1; i <= N; i++)
        cin >> A[i];
    QuickSort(A, 1, N);
    cout << "Quick Sorted: " << endl;
    for (int i = 1; i <= N; i++)
    {
        if (i != 1)
           cout<< A[i]<<" ";
        else
            cout<< A[i]<<" ";
    }
    cout << "\nEnter Value to Search: " << endl;
    int X;
    cin >> X;
    int idx = binarySearch(A, 1, N, X);
    if (idx == -1)
        cout << "Not found. " << endl;
    else
        cout << "Found at index: " << (idx + 1) << endl;
    return 0;
}
*/