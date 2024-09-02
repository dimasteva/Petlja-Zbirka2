/*
Task: Decomposition into a Sum of Squares

Write a program that determines the minimum number of squares of natural numbers whose sum is equal to a given natural number n.
Input: The first and only line of the standard input contains a natural number n (n ≤ 105).
Output: Display the minimum number of squares whose sum is equal to the number n.

Example:
Input:
72

Output:
2

Explanation:
72 = 36 + 36
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

int rec(int n)
{
	vector<int> dp(n + 1);
	dp[0] = 0;
	for (int i = 1; i <= n; i++)
	{
		dp[i] = i;
		for (int j = 1; j * j <= i; j++)
		{
			dp[i] = min(dp[i], dp[i - j*j] + 1);
		}
	}
	return dp[n];
}

int main()
{
	int n; cin >> n;
	cout << rec(n) << endl;
}
