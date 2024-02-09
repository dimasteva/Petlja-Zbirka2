/*
Task: Lowest Temperature
Given temperatures in several cities, write a program to determine the temperature in the coldest city.

Input: The first line of standard input contains a natural number n (3 ≤ n ≤ 50) representing the number of cities. In each of the next n lines, there is an integer t (−20 ≤ t ≤ 40) representing the temperature in the corresponding city.

Output: On standard output, in one line, display the temperature in the coldest city.

Example
Input
5
10
-12
22
-13
15
Output
-13
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

int calcMin(int n, int mn)
{
    if (n > 0)
    {
        int c; cin >> c;
        return calcMin(n - 1, min(c, mn));
    } else
        return mn;
}

int main()
{
    int n; cin >> n;
    cout << calcMin(n, INT_MAX) << endl;
}
