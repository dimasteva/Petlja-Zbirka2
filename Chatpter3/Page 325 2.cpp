/*
Task: Power

Write a program that calculates the value of x^n. Try to write the program without using library functions and exponentiation operators.

Input: Enter a real number x (0.8 ≤ x ≤ 1.2) and an integer n (0 ≤ n ≤ 20) from the standard input.

Output: Print on the standard output the value of x^n rounded to five decimals.

Example:
Input
1.1
5

Output
1.61051
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

double power(double x, int n, double pw)
{
    if (n == 0)
        return pw;
    return power(x, n - 1, pw * x);
}

int main()
{
    double x; cin >> x;
    int n; cin >> n;
    cout << fixed << setprecision(5) << power(x, n, 1);
}
