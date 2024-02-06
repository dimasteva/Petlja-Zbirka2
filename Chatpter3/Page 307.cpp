/*
Task: Geometric Series

Write a program that, for given natural numbers a and b, prints numbers from the interval [a, b], where the first number to be printed is equal to a, and each subsequent number is three times greater than the previous one. For example, for [a, b] = [5, 50], the output should be 5, 15, 45.

Input: Enter natural numbers a (1 ≤ a ≤ 50) and b (a ≤ b ≤ 10000) from the standard input, each on a separate line.

Output: Print on the standard output all requested numbers in order (from smallest to largest). Print each number on a separate line.

Example:
Input
5
50

Output
5
15
45
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

void print(int a, int b)
{
    if (a <= b)
    {
        cout << a << endl;
        a *= 3;
        print(a, b);
    }
}

int main()
{
    int a, b; cin >> a >> b;
    print(a, b);
}
