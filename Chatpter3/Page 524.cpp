/*
Task: Number of Partitions

A partition of a positive natural number n is a way of breaking down the number n into a sum of several positive natural numbers where the order of the summands does not matter (thus, we can assume that the order is either always non-increasing or always non-decreasing).
For example, if the order is non-increasing, the partitions of the number 4 are: 1 + 1 + 1 + 1, 2 + 1 + 1, 2 + 2, 3 + 1, 4.
Write a program that determines the number of partitions for a given natural number n.

Input: The first and only line of the standard input contains a natural number n (n≤100).

Output: On the standard output, print the number of partitions of the natural number n.

Example 1

Input:
6

Output:
11

Explanation:
The partitions with non-increasing summands are:
1+1+1+1+1+1
1+1+1+1+2
1+1+1+3
1+1+2+2
1+1+4
1+2+3
1+5
2+2+2
2+4
3+3
6

Example 2

Input:
100

Output:
190569292
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define forn(i, n)          for (int i = 0; i < int(n); i++)
#define forn1(i, n)          for (int i = 1; i < int(n); i++)
#define pb                  push_back
#define MOD                 1000000007 // 998244353
#define FIO                 ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(c) (c).begin(), (c).end()

int solve(int N)
{
	vector<int> dp(N+1);
	dp[0] = 1;
	for (int mx = 1; mx <= N; mx++)
	{
		for (int n = mx; n <= N; n++)
		{
			dp[n] += dp[n-mx];
		}
	}
	return dp[N];
}

int main()
{
	int n; cin >> n;
	cout << solve(n);
}
