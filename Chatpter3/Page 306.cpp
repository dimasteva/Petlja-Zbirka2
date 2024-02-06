/*
Task: Interval Division into Equal Parts

Write a program that prints values of n evenly spaced real numbers from the interval [a, b], where the first value is a, and the last one is b.

Input: The first line of the standard input contains a natural number n (1 < n ≤ 20), the second line contains a real number a, and the third line contains a real number b, where a < b.

Output: Print on the standard output the requested numbers, rounded to five decimals, each on a separate line.

Example:
Input
5
-1
1

Output
-1.00000
-0.50000
0.00000
0.50000
1.00000
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define forn(i, n) for (int i = 0; i < int(n); i++)
#define forn1(i, n) for (int i = 1; i < int(n); i++)
#define all(c) (c).begin(), (c).end()
#define pb push_back
#define MOD 1000000007 // 998244353
#define FIO                \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);

void evenly_distributed_numbers(int n, double a, double dx) {
  if (n > 0) {
    cout << setprecision(5) << showpoint << fixed
         << a << endl;
    evenly_distributed_numbers(n-1, a+dx, dx);
  }
}

int main() {
   FIO

   int n;
   cin >> n;
   double a, b;
   cin >> a >> b;
   double dx = (b - a) / (n - 1);
   evenly_distributed_numbers(n, a, dx);
   return 0;
}
