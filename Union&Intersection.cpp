#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, c, d, x, y, z;
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;

    char str;
    cin >> a >> b;
    cin >> str;
    // initializing v1 and v3
    for (int j = 0; j < a; j++)
    {
        cin >> x;
        v1.push_back(x);
        v3.push_back(x);
        // cout << j << endl;
    }
    // initializing v2 and v3
    for (int k = 0; k < b; k++)
    {
        cin >> y;
        v2.push_back(y);
        v3.push_back(y);
    }
    int ct = v3.size();
    int count = 0;
    //Union Part
    // delete duplicate elements
    for (int i = 0; i < ct; i++)
    {
        for (int j = i + 1; j < ct; j++)
        {
            if (v3[i] == v3[j])
            {
                for (int k = j; k < ct; k++)
                {
                    v3[k] = v3[k + 1];
                }
                j--;
                ct--;
                // count matching elements number
                count++;
            }
        }
    }
    // delete 0(Null) elements from vector
    for (int i = 0; i < count; i++)
    {
        v3.pop_back();
    }
    // sort the vector
    sort(v3.begin(), v3.end());

    if (str == 'U')
    {
        // union results print
        for (int i = 0; i < v3.size(); i++)
        {
            cout << v3[i] << " ";
        }
    }

    // intersection part
    if (str == 'I')
    {
        //find common element if a small
        if (a < b)
        {
            for (int i = 0; i < a; i++)
            {
                for (int j = 0; j < b; j++)
                {
                    if (v1[i] == v2[j])
                    {
                        cout << v1[i] << " ";
                    }
                }
            }
        }
       //find common element if b small
        if (a > b)
        {
            for (int i = 0; i < b; i++)
            {
                for (int j = 0; j < a; j++)
                {
                    if (v2[i] == v1[j])
                    {
                        cout << v2[i] << " ";
                    }
                }
            }
        }
    }

    return 0;
}