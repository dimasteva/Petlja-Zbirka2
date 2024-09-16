/*
Task: Minimum Number of Coins for Payment

Given the values of n types of coins, write a program that determines the minimum number of coins needed to make a given amount S, where an unlimited number of each type of coin is available. The values of the coins and the amount to be paid are given in the same currency.

Input:
The first line of the standard input contains a natural number S (S ≤ 1000). The second line contains a natural number n (n ≤ 100), followed by n lines each containing a natural number representing the value of each type of coin.

Output:
On the standard output, display the minimum number of coins needed to make the amount S in one line.

Example 1:

Input:
7
3
1
3
2

Output:
3

Explanation: The minimum number of coins to make amount 7 is 3, 3, 1.

Example 2:

Input:
12
3
1
9
6

Output:
2

Explanation: The minimum number of coins to make amount 12 is 6, 6.
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define forn(i, n) for (int i = 0; i < int(n); i++)
#define forn1(i, n) for (int i = 1; i < int(n); i++)
#define all(c) (c).begin(), (c).end()
#define pb push_back
#define MOD 1000000007
#define FIO                \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);

ll rec(vector<int>& a, int target)
{
	int n = a.size();
	vector<ll> dp(target+1, LLONG_MAX);
	dp[0] = 0;
	for (int i = 0; i < n; i++)
	{
		for (int t = a[i]; t <= target; t++)
		{
			if (dp[t - a[i]] != LLONG_MAX)
			{
				dp[t] = min(dp[t], dp[t - a[i]] + 1);
			}
		}
	}
	
	if (dp[target] == LLONG_MAX)
		return -1;
	else
		return dp[target];
}

int main()
{
	FIO
	int target; cin >> target;
	int n; cin >> n;
	vector<int> a(n);
	for (int& x : a)
		cin >> x;
	cout << rec(a, target);
}
