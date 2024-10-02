/*
Task: Chess Teams

Chess team A has invited chess team B for a practice session. Each team has the same number of players, and each player's rating is known.
The host team can choose the pairs who will play in the first round. If each host player wins against a guest with a lower or equal rating, and loses to a guest with a strictly higher rating, write a program that determines the maximum number of wins the host team (team A) can achieve in the first round.

Input:
The first line of the input contains the number n (1 ≤ n ≤ 50000), followed by the ratings of the host team's players (natural numbers) separated by spaces in the next line, and the ratings of the guest team's players (natural numbers) separated by spaces in the following line.

Output:
Print a single number representing the maximum number of wins the host team can achieve.

Example
Input
4
2120 1985 2205 1842
2045 2100 1990 1980
Output
3

Explanation
The host team can achieve at most three wins. For example, the player with a rating of 2205 can win against the player with a rating of 2100, the player with a rating of 2120 can win against the player with a rating of 2045, and the player with a rating of 1985 can win against the player with a rating of 1980.
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
    FIO
    int n; cin >> n;
    vector<int> a(n), b(n);
    for (int& x : a)
    	cin >> x;
    for (int& x : b)
    	cin >> x;
    
    sort(all(a));
    sort(all(b));
    int j = 0;
    int score = 0;
    for (int i = 0; i < n && j < n; i++, j++)
    {
    	while(j < n && a[j] < b[i])
    		j++;
    	if (j == n)
    		break;
    	score++;
	}
	cout << score << endl;
}
