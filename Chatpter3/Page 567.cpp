/*
Task: Longest Common Substring
Define a function that determines the length of the longest common substring (consecutive characters) of two given strings. For example, for the strings "ababc" and "babbca," the longest common substring is "ab."
Input: Each of the two lines of standard input contains a string composed of lowercase English letters, with a length of at most 1000 characters.
Output: Print the length of the longest common substring to the standard output.
Example
Input
acabacamaca
macabacaaca
Output
7
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
	vector<vector<int>> dp(n1+1, vector<int>(n2+1, 0));
	int mx = 0;
	for (int i = 1; i <= n1; i++)
	{
		for (int j = 1; j <= n2; j++)
		{
			if (a[i-1] == b[j-1])
				dp[i][j] = dp[i-1][j-1] + 1;
			mx = max(mx, dp[i][j]);
		}
	}
	return mx;
}	

int main()
{
	FIO
	cin >> a >> b;
	cout << rec(a.size(), b.size());
}
