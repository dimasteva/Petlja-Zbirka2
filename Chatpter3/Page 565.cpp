/*
Task: Longest Repeating Subsequence

Write a program that finds the length n of the longest subsequence in a given string s (not necessarily consisting of consecutive characters) that repeats in the string s, but in such a way that for every 0 ≤ i < n, the i-th characters of the subsequences do not have the same position in the string s.

Input: The first line of the standard input contains a string s of length at most 1000.

Output: The standard output should display the desired length in one line.

Example:

Input:

mahaabkbc

Output:

3
*/

#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ll;

#define forn(i, n) for (int i = 0; i < int(n); i++)
#define forn1(i, n) for (int i = 1; i < int(n); i++)
#define all(c) (c).begin(), (c).end()
#define pb push_back
#define MOD 1000000007
#define FIO                \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);

string a;

ll rec(int n1, int n2)
{
	vector<vector<int>> dp(n1+1, vector<int>(n2+1, 0));
	for (int i = 0; i <= n1; i++)
		dp[i][0] = 0;
	for (int i = 0; i <= n2; i++)
		dp[0][i] = 0;
	for (int i = 1; i <= n1; i++)
	{
		for (int j = 1; j <= n2; j++)
		{
			if (a[i-1] == a[j-1] && i != j)
				dp[i][j] = dp[i-1][j-1] + 1;
			else
				dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
		}
	}
	return dp[n1][n2];
}	

int main()
{
	cin >> a;
	cout << rec(a.size(), a.size());
}
