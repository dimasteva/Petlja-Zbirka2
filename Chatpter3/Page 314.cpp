/*
Task: Numbers Divisible by 3
Write a program that, among the entered numbers, determines and prints those that are divisible by 3.

Input: From standard input, first read a natural number n (1 ≤ n ≤ 1000), and then n natural numbers from the interval [1, 10^8], each in a separate line.

Output: Print on standard output all the entered numbers that are divisible by 3 (in the same order as they were entered). Print each number on a separate line.

Example:
Input
5
100
11
12
18
102

Output
12
18
102
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

void dev(int n)
{
    if (n > 0)
    {
        int c; cin >> c;
        if (c % 3 == 0)
            cout << c << endl;
        dev(n - 1);
    }
}

int main()
{
    int n; cin >> n;
    dev(n);
}
