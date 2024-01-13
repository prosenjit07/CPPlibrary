//Bitwise sieve Algorithm
#include <bits/stdc++.h>
using namespace std;

const int N = 100;
int status[(N / 32) + 1]; // Increase the size of 'status' array

bool Check(int N, int pos)
{
    return (bool)(N & (1 << pos));
}

int Set(int N, int pos)
{
    return N | (1 << pos);
}

void sieve()
{
    int i, j, sqrtN;
    sqrtN = int(sqrt(N));
    for (i = 3; i <= sqrtN; i += 2)
    {
        if (!Check(status[i / 32], i % 32)) // Correct the function name
        {
            for (j = i * i; j <= N; j += 2 * i)
            {
                status[j / 32] = Set(status[j / 32], j % 32);
            }
        }
    }
    puts("2");
    for (i = 3; i <= N; i += 2)
        if (!Check(status[i / 32], i % 32)) // Correct the function name
            printf("%d\n", i);
}

int main()
{
    sieve();
    return 0;
}
