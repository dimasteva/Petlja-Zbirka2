/*
Task: Factorial

The digits 1, 2, ..., n are given. Write a program that calculates how many different n-digit numbers can be formed using all these digits (for example, from the digits 1, 2, 3, numbers like 123, 132, 213, 231, 312, and 321 can be formed).

Note: The number of permutations of a set of n elements is equal to the factorial of n, i.e., n! = 1 · 2 · ... · n. Consider why this is the case.

Input: The first line of the standard input contains a natural number n (1 ≤ n ≤ 9).

Output: Print on the standard output the number of different numbers that can be formed using the digits 1, 2, ..., n.

Example 1:
Input
5

Output
120

Example 2:
Input
9

Output
362880
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

ll calc(ll n)
{
    if (n == 1)
        return 1;
    return n * calc(n - 1);
}

int main()
{
    ll n; cin >> n;
    cout << calc(n) << endl;
}
