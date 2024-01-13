#include <iostream>
#include <map>

int main() {
    long long n, m;
    std::cin >> n >> m;

    std::map<int, long long> remainder_count;

    // Calculate the remainders for the values of x from 1 to n
    for (int x = 1; x <= n; x++) {
        int remainder = x % 5;
        remainder_count[remainder]++;
    }

    long long total_pairs = 0;

    // Calculate the remainders for the values of y from 1 to m
    for (int y = 1; y <= m; y++) {
        int remainder = (5 - y % 5) % 5; 
        // Calculate the remainder to make (x + y) divisible by 5
        total_pairs += remainder_count[remainder];
    }

    std::cout << total_pairs << std::endl;

    return 0;
}


// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main()
// {
//     ll n, m;
//     cin >> n >> m;
//     ll mini = min(n, m);
//     ll maxi = max(n, m);
//     map<ll, ll> ms;
//     for (ll i = 1; i <= maxi; ++i)
//     {
//         ms[i % 5]++;
//     }

//     ll ans = 0;
//     for (ll i = 1; i <= mini; ++i)
//     {
//         ll a = i % 5;
//         ll rem = (5 - a + 5) % 5;

//         if(ms[i]+)
//         if (ms.count(rem))
//         {
//             ans += ms[rem];
//         }
//     }
//     cout << ans << endl;
//     return 0;
// }