#include <iostream>
using namespace std;

// Function to count the divisors
int countDivisors(int N, int a, int b, int c, int d)
{
    // Counts of numbers divisible by a, b, c, and d
    int count1 = N / a;
    int count2 = N / b;
    int count3 = N / c;
    int count4 = N / d;

    // Inclusion-exclusion principle applied
    int count5 = (N / (a * b));
    int count6 = (N / (a * c));
    int count7 = (N / (a * d));
    int count8 = (N / (b * c));
    int count9 = (N / (b * d));
    int count10 = (N / (c * d));

    int count11 = (N / (a * b * c));
    int count12 = (N / (a * b * d));
    int count13 = (N / (a * c * d));
    int count14 = (N / (b * c * d));

    // Inclusion-exclusion principle applied
    int count15 = (N / (a * b * c * d));

    // for even substraction and for odd summation
    return count1 + count2 + count3 + count4 - count5 - count6 - count7 - count8 - count9 - count10 + count11 + count12 + count13 + count14 - count15;
}

int main()
{
    int N, a, b, c, d;
    cin>>N>>a>>b>>c>>d;

    int ans = countDivisors(N, a, b, c, d);
    cout << "Number of divisors of " << N << " divisible by " << a << ", " << b << ", " << c << ", and " << d << " is: " << ans << endl;
    return 0;
} 
