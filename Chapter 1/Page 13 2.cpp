/*
Task: First Non-Divisible

Consider the sequence of numbers: 210, 2310, 390, 30, 510, 66, 6, 138, 46, 106, 59, 17, 23.
It is interesting for several reasons. For example, the first five numbers are divisible by 10, and after that, none of the numbers is divisible by 10. The first ten numbers are even, and after that, all numbers are odd. The first eight numbers are divisible by 6, and after that, none of the numbers is divisible by 6. The first two numbers are divisible by 210, and after that, none of the numbers is divisible by 210, etc.
Try to find more such patterns.

Write a program that, for each entered divisor, determines how many numbers are divisible by it. Assume that for each entered divisor, the mentioned pattern holds.

Input: 
Read a number n (1 ≤ n ≤ 105) from the standard input, followed by n natural numbers (less than 1018) separated by a single space on the next line. After that, enter divisors until the end of the input. For each divisor, it is known (and it is not necessary to check) that the sequence contains first numbers that are divisible and then numbers that are not divisible by that divisor.

Output: 
For each entered divisor, print the number of array elements divisible by it on a separate line.

Example
Input:
13
210 2310 390 30 510 66 6 138 46 106 59 17 23
10
2
6
2
4
15

Output:
5
10
8
10
0
5

*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void ModifiedBinarySearch(vector <ll> v, int n, ll k)
{
    int l = 0, r = n - 1;
    while(l < r)
    {
        int m = l + (r - l) / 2;
        if (v[m] % k != 0)
            r = m;
        else
            l = m + 1;
    }
    cout << r << endl;
}

int main()
{
    int n; cin >> n;

    vector <ll> v(n);
    for (ll &x : v)
        cin >> x;

    ll k;
    while(cin >> k)
        ModifiedBinarySearch(v, n, k);
}