/*
Problem Statement: Arithmetic Triangle

Consider the following arithmetic triangle:

          1
        2 3 4
      5 6 7 8 9
 10 11 12 13 14 15 16

You are tasked with determining the sum of numbers in a given row of this triangle.

Input:

Row number k (1 ≤ k ≤ 5 × 10^5), representing the row of the triangle for which the sum should be calculated (counting starts from 1).
Output:

The sum of values in the specified row of the triangle.

Example:

Input
3

Output
35
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define forn(i, n) for (int i = 0; i < int(n); i++)
#define forn1(i, n) for (int i = 1; i < int(n); i++)
#define all(c) (c).begin(), (c).end()
#define pb push_back
#define MOD 1000000007 // 998244353
#define FIO \
    ios::sync_with_stdio(false); \
    cin.tie(0); \
    cout.tie(0);

long long gaus(long long n) {
    return n * (n + 1) / 2;
}

int main() {
    FIO;
    int t;
    cin >> t;
    while (t--) {
        long long k;
        cin >> k;

        long long sumOfTriangleRows = gaus(k * k) - gaus((k - 1) * (k - 1));

        cout << sumOfTriangleRows << endl;
    }

    return 0;
}
