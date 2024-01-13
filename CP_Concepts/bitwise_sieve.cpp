// Bitwise sieve Algorithm
// for better memory management
// https://www.shafaetsplanet.com/?p=855
#include <bits/stdc++.h>
using namespace std;

const int N = 100;
int status[(N / 32) + 1]; // Increase the size of 'status' array

bool Check(int N, int pos)
{
    return (bool)(N & (1 << pos)); // Check whether the pos'th bit is 1 or 0 and return the result
}

int Set(int N, int pos)
{
    return N | (1 << pos); // Set the pos'th bit as 1 and return the result
}

void sieve()
{
    int i, j, sqrtN;
    sqrtN = int(sqrt(N));
    for (i = 3; i <= sqrtN; i += 2)
    {
        // if i is prime then i will mark its multiples as non prime
        if (!Check(status[i / 32], i % 32))
        {
            // here j = i*i because i*i is the first multiple
            // of i which is not prime
            for (j = i * i; j <= N; j += 2 * i)
            {
                // here j = j+2*i because i*i is odd
                // and all the multiples of i will be odd
                status[j / 32] = Set(status[j / 32], j % 32);
            }
        }
    }
    puts("2");
    for (i = 3; i <= N; i += 2)
        if (!Check(status[i / 32], i % 32)) // if i is prime then print it
            printf("%d\n", i);
}

int main()
{
    sieve();
    return 0;
}
