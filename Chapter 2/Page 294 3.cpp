/*
Task: Square-Triangular Numbers

Consider arranging balls in regular square and triangular shapes. For example, 36 balls can be arranged in a square of dimensions 6 × 6 (6 rows with 6 balls each) and a rectangular triangle of dimensions 8 × 8 (in rows, we have 1, 2, ..., 8 balls).

Write a program that determines all numbers of balls less than or equal to a given limit that can be correctly arranged in both a square and a triangle.

Input: The standard input takes a number n (1 ≤ n ≤ 10^17).

Output: Print on the standard output all square-triangular numbers that are less than or equal to n.

Example:

Input:
2000

Output:
1
36
1225
*/
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define FIO                \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);

bool isSquare(ll n) {
    ll root = sqrt(n);
    return root * root == n;
}

int main()
{
    FIO;
    ll n; cin >> n;
    for (ll i = 1; ; i++)
    {
        ll t = i * (i + 1) / 2;
        if (t > n) break;
        if (isSquare(t))
            cout << t << endl;
    }
}
