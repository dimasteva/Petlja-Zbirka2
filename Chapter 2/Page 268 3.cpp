/*
Task: Prime Factors 235
Consider the sequence of numbers whose prime factors are only 2, 3, and 5 (each factor can appear zero or more times). These are the numbers 1, 2, 3, 4, 5, 6, 8, 9, 10, 12, 15, 16, 18, and so on. Write a program that determines the n-th element of this sequence (counting starts from 0).

Input: The input consists of a number n (0 ≤ n ≤ 10000) read from the standard input.

Output: Print the requested n-th element of the sequence to the standard output.

Example 1:
Input
7
Output
9

Example 2:
Input
500
Output
944784
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

int main() {
  int n;
  cin >> n;
  vector<long long> a2, a3, a5;
  a2.push_back(2);
  a3.push_back(3);
  a5.push_back(5);
  long long t = 1;
  int i2 = 0, i3 = 0, i5 = 0;
  for (int i = 0; i < n; i++) {
    t = min({a2[i2], a3[i3], a5[i5]});
    a2.push_back(2*t);
    a3.push_back(3*t);
    a5.push_back(5*t);
    while (i2 < a2.size() && a2[i2] == t) i2++;
    while (i3 < a3.size() && a3[i3] == t) i3++;
    while (i5 < a5.size() && a5[i5] == t) i5++;
  }
  cout << t << endl;
  return 0;
}
