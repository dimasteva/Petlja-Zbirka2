/*
Task: Brilliant Game Series
A basketball player has a brilliant game if he scores at least p points. Write a program that, based on the number of points scored in each game during the season, determines whether the basketball player has ever had a series of more than k consecutive brilliant games.

Input: Read from standard input the number p (5 ≤ p ≤ 60), then the required length of the series k, and then the number of games n (3 ≤ k ≤ n ≤ 105). In the next n lines, read the number of points scored (a natural number less than or equal to 100).

Output: Print "da" to standard output if the series exists, or "ne" if it does not.

Example 1
Input
30
3
5
38
30
32
28
35
Output
da

Example 2
Input
30
3
5
38
30
28
32
35
Output
ne
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
	int p, k, n;
    cin >> p >> k >> n;
    int cnt = 0;
    bool found = false;
    forn(i, n)
    {
        int c; cin >> c;
        if (c >= p)
            {cnt++; found = (found || cnt >= k);}
        else
            cnt = 0;
    }
    cout << (found? "da" : "ne") << endl;
}
