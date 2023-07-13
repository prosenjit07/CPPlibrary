/*
int k = 0;
for (int b = n; b >= 1; b /= 2) {
     while (k+b < n && a[k+b] <= x) k += b;
}
if (a[k] == x) 
    // x found at index k
else
    // x not found

// This code searches for a number xin an array athat contains na number. The search starts from the beginning of the table and at each stage one step is jumped forward bif the target index is in the table and the value at its position is at most x. The time requirement of the code is logarithmic, as bit is halved every round.

// In practice, however, binary search usually does not need to be implemented to search for an element, because the C++ standard library has many ready-made tools for this (including the function binary_search). However, the real benefit of binary search is that it can be used to find the change point of a function .

// Suppose that the function f(x)takes the value 0 for xat most k, and the value 1 for xmore than k. Binary search can be used to effectively find a change point kas follows:

int k = 0;
for (int b = n; b >= 1; b /= 2) {
    while (f(k+b) == 0) k += b;
}


In this case n, a sufficiently large number is suitably chosen, which is known to be greater than the change point k.

Searching for a change point is useful because many problems can be presented in the form of "find the first point where something happens" (for example, the shortest time in which the factory can produce the desired amount of products). With binary search, it is sufficient to try only the logarithmic number of alternatives for the point in question.

Meet in the middle
We are given na number and we want to calculate how many subsets have the sum of the numbers x. This can be done in time O(2^n)by going through all the subsets, but with the meet in the middle technique, the time is only O(2^(n/2)). This is a significant improvement because the number in the exponent is halved.

The idea is to first divide the figures into two sets and go through the subsets of these sets, which takes time O(2^(n/2)). In this step, the sum of each subset is calculated and the sums are arranged. After this, it is enough to go through the subsets of the first set and calculate for each subset how many ways a subset can be selected from the second set so that the sum becomes x. When the sum of the subset of the first set is a, a subset whose sum is , must be selected from the second set x-a. This is done effectively when the subsets are in order.

For example, when the set is {1,2,3,4} and the desired sum is 5, the sets {1,2} and {3,4} are formed. The sums of the subsets of these sets are [0,1,2,3] and [0,3,4,7]. There are two ways to get the sum to be 5: choose sum 1 from the first list and sum 4 from the second list, or sum 2 from the first list and sum 3 from the second list.*/


