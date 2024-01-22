/*
Task: Best "Submit"
During an intergalactic programming championship, a competitor submitted one task multiple times. The score a competitor receives for a task is calculated by determining the highest score from all individual submissions (looking at the "best submit"). Write a program that determines the score the student had after each submission for that task. Since intergalactic tasks are very difficult, they carry many points, and competitors often submit them many times.

Input: The first line of the standard input contains a natural number n (n ≤ 50000). In the next n lines, there are scores that the student received for each individual submission (a number between 0 and 100000).

Output: Print n lines to the standard output, each line indicating the score the student had for that task after each submission.

Example:
Input
5
3
2
4
1
5
Output
3
3
4
4
5
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
    int n; cin >> n;
    int mx = INT_MIN;
    forn(i, n)
    {
        int c; cin >> c;
        mx = max(mx, c);
        cout << mx << endl;
    }
}
