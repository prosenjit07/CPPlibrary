#include <bits/stdc++.h>
using namespace std;

buidTree(int *a, int s, int e, int *tree, int index)
{
    // base case
    if (s == e)
    {
        tree[index] = a[s];
        return -1;
    }
    // recursive case
    int mid = (s + e) / 2;
    // post-order-traversal
    buidTree(a, s, mid, tree, 2 * index);
    buidTree(a, mid + 1, e, tree, 2 * index + 1);
    tree[index] = min(tree[2 * index], tree[2 * index + 1]);
    return -1;
}

int main()
{

    int a[] = {1, 3, 2, -5, 6, 4};
    int n = sizeof(a) / sizeof(int);

    int *tree = new int[4 * n + 1];
    buidTree(a, 0, n - 1, tree, 1);

    cout << "Segment tree: ";
    for (int i = 1; i <= 13; i++)
    {
        cout << tree[i] << " ";
    }

    return 0;
}