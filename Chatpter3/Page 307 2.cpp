/*
Task: Sum of n Numbers

Write a program that calculates the sum of n given integers.

Input: The first line of the standard input contains a natural number n (1 ≤ n ≤ 1000). Each of the next n lines contains one integer xi.

Output: Print on the standard output the sum of the entered n integers x1, ..., xn.

Example:
Input
4
10
-3
2
4

Output
13
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

int sum(vector <int> a, int n, int start)
{
    if (start == n)
        return 0;
    return a[start] + sum(a, n, start + 1);
}

int main()
{
    int n; cin >> n;
    vector <int> a(n);
    for (int &x : a)
        cin >> x;
    cout << sum(a, n, 0) << endl;
}
