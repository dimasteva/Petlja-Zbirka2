/*
Task: Line of People
In the line in front of the counter for selling tickets for a football match, there are n people. The heights of the people standing in line are known, in order from the first to the last person in line. Write a program that determines how many people the clerk at the counter can see, given that the clerk sees those people in the line in front of whom all the people are shorter.

Input: The first line of the standard input contains a natural number n (5 ≤ n ≤ 50000), representing the number of people in line. Each of the next n lines contains a natural number, representing the heights in order from the first to the last person in line (heights can be expressed in arbitrary units, and can be numbers between 10 and 105).

Output: Print in one line to the standard output the number of people in the line that the clerk can see.

Example:
Input
8
165
178
170
178
183
176
168
183
Output
3
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
    int cnt = 0;
    forn(i, n)
    {
        int c; cin >> c;
        if (c > mx)
        {
            mx = c;
            cnt++;
        }
    }
    cout << cnt;
}
