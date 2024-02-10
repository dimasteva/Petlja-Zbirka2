/*
Task: First Negative Temperature
Given the temperatures for each day of a certain period, write a program to determine the ordinal number of the day in that period when the temperature was negative for the first time.

Input: The first line of standard input contains a natural number n (3 ≤ n ≤ 365) representing the number of days in the period. Each of the next n lines contains an integer from the interval [−5, 40], representing the temperatures for n consecutive days in the period.

Output: On the first line of standard output, display the ordinal number of the day in the period when the temperature was negative for the first time (days are counted from 1 to n). If there is no such day, print -1.

Example 1:
Input
5
12
10
-2
-3
4
Output
3

Example 2:
Input
3
12
10
14
Output
-1
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

void find(int n, int &neg, int cnt)
{
    if (n > 0)
    {
        int c; cin >> c;
        if (c < 0 && neg == -1)
            neg = cnt;
        find(n - 1, neg, cnt + 1);
    }
}

int main()
{
    int n; cin >> n;
    int neg = -1;
    find(n, neg, 1);
    cout << neg;
}
