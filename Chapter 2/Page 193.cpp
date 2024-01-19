/*
Task: Factorials from 1 to n
Write a program that prints the values of factorials for all natural numbers from 1 to n. The factorial of a number k, denoted as k!, is the product of natural numbers from 1 to k (k! = 1 · 2 · 3 · · · · k).

Input: The first line of the standard input contains a natural number n ≤ 20.

Output: The standard output contains, in sequence, the factorials of natural numbers from 1 to n, with each factorial on a separate line.

Example:
Input
4
Output
1
2
6
24
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

int main()
{
    FIO;
    int n; cin >> n;
    ll sum = 1;
    forn1(i, n + 1)
    {
        sum *= i;
        cout << sum << endl;
    }
}
