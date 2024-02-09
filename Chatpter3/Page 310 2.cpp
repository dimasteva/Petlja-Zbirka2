/*
Task: Second on the Leaderboard
Based on the results of a competition in which N students participated, a leaderboard was formed. The leaderboard is arranged in non-decreasing order by results, from the best to the worst. Write a program to determine the number of points of the competitor who is second on the leaderboard.

Input: The first line of standard input contains a natural number N (1 ≤ N ≤ 50000) representing the number of competitors. In each of the next N lines, there is an integer from the interval [0, 50000], these numbers represent the results of the competitors. The numbers are not sorted by points but by the computer numbers the competitors were sitting at.

Output: On one line of standard output, display the number of points of the competitor who is second on the leaderboard.

Example Input:
5
80
95
75
50
95

Output:
95
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

int calcMin(int n, pair<int, int> p)
{
    if (n > 0)
    {
        int c; cin >> c;
        if (c > p.first)
        {p.second = p.first; p.first = c;}
        else if (c > p.second)
            p.second = c;
        return calcMin(n - 1, p);
    } else
        return p.second;
}

int main()
{
    int n; cin >> n;
    cout << calcMin(n, {INT_MIN, INT_MIN}) << endl;
}
