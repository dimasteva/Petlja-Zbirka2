/*
Task: Longest common subsequence of two strings
Write a program that calculates the length of the longest common subsequence of two strings. A subsequence consists of characters from a string that do not need to be consecutive, but appear in the same order as in the original string.
For example, for strings abacbc and babbca, the longest common subsequence is babc.

Input: Two lines of standard input contain two strings consisting of lowercase English letters, each up to 1000 characters long.

Output: Output the desired length to standard output.

Example

Input
xmjyauz
mzjawxu

Output
4
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

string a, b;

ll rec(int n1, int n2)
{
	vector<vector<int>> dp(n1 + 1, vector<int>(n2 + 1, 0));
	for (int i = 0; i < n2; i++)
		dp[0][i] = 0;
	for (int i = 0; i < n1; i++)
		dp[i][0] = 0;
	
	for (int i = 1; i <= n1; i++)
	{
		for (int j = 1; j <= n2; j++)
		{
			dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
			if (a[i-1] == b[j-1])
				dp[i][j] = max(dp[i][j], dp[i-1][j-1] + 1);
		}
	}
	return dp[n1][n2];
}	

int main()
{
	FIO
	cin >> a >> b;
	cout << rec(a.size(), b.size());
}
