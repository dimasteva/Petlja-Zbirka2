/*
Task: Longest Winning Streak
A basketball team has played many games in a season. In each game, they either achieved a victory or suffered a defeat. Write a program that determines the length of the longest streak of consecutive victories during the season.

Input: Read from standard input a natural number N (5 ≤ N ≤ 50000), followed by N numbers -1 (indicating a defeat) or 1 (indicating a victory).

Output: Print one natural number to standard output, representing the length of the longest streak of consecutive victories.

Example
Input
8
1
1
-1
1
1
1
-1
-1
Output
3
*/
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define forn(i, n)          for (int i = 0; i < int(n); i++)
#define forn1(i, n)          for (int i = 1; i < int(n); i++)
#define all(c) (c).begin(), (c).end()
#define pb                  push_back
#define MOD                 1000000007 // 998244353
#define FIO                 ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);


int main()
{
	int n;
    cin >> n;
    int mx = 0;
    int cnt = 0;
    forn(i, n)
    {
        int c;
        cin >> c;
        if (c == 1)
            cnt++;
        else
            {mx = max(mx, cnt); cnt = 0;}
    }
    cout << max(mx, cnt) << endl;
}
