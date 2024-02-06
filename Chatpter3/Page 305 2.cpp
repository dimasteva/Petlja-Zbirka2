/*
Task: Countdown

Write a program that counts down from a given number to zero.

Input: Enter a natural number a less than 100 from the standard input, from which the countdown begins.

Output: Print on the standard output all numbers from a to zero in descending order, one per line.

Example:
Input
3

Output
3
2
1
0
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

void print(int n)
{
    if (n >= 0)
    {
        cout << n << endl;
        print(n - 1);
    }
}

int main()
{
    int n; cin >> n;
    print(n);
}
