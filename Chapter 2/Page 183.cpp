/*
Task: Sorting Numbers

Write a program that sorts an array of numbers in non-decreasing order (each subsequent number must be greater than or equal to the previous one).

Input:
From standard input, enter the number n (1 ≤ n ≤ 5 · 10^4), and then enter n natural numbers, each smaller than 2n, one per line.

Output:
Print on standard output the entered numbers in sorted order.

Example:
Input
5
3
1
6
8
1
Output
1
1
3
6
8
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
    multiset <int> a;
    forn(i, n)
    {
        int c; cin >> c;
        a.insert(c);
    }
    for (int c : a)
        cout << c << endl;
}
