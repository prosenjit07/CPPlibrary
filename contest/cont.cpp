#include <iostream>
#include <vector>
using namespace std;

bool checkBitwiseANDSubsequence(int N, int B, vector<int> &A) {
    for (int i = 0; i < N; ++i) {
        for (int j = i + 1; j < N; ++j) {
            if ((A[i] & A[j]) == B) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, B;
        cin >> N >> B;

        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        if (checkBitwiseANDSubsequence(N, B, A)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         string s1, s2;
//         cin >> s1 >> s2;
//         if (s1.size() == 1 && s2.size() == 1 && s1 != s2)
//         {
//             cout << "No" << endl;
//         }
//         else if (s1.size() > 1 && s2.size() > 1)
//         {
//             int flag=0;
//             for (int i = 0; i < s1.size(); i++)
//             {
//                 for (int j = 0; j < s1.size(); j++)
//                 {
//                     if(s1[i]==s2[j]){
//                         cout<<"Yes"<<endl;
//                         flag=1;
//                         break;
//                     }
//                 }
//                 if(flag==1)
//                 break;
//             }
//             if(flag==0)
//             cout << "No" << endl;
//         }
//     }
// }

// #include <iostream>
// #include <string>
// using namespace std;

// bool canFormPalindrome(string a, string b) {
//     for (char c : a) {
//         if (b.find(c) != string::npos)
//             return true;
//     }
//     return false;
// }

// int main() {
//     int T;
//     cin >> T;

//     while (T--) {
//         string A, B;
//         cin >> A >> B;

//         if (canFormPalindrome(A, B))
//             cout << "Yes" << endl;
//         else
//             cout << "No" << endl;
//     }

//     return 0;
// }