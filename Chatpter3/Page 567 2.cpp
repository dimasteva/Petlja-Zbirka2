/*
Task: Longest Non-Overlapping Repeating Substring

Write a program that finds the length of the longest substring in a given string s that repeats without overlapping (i.e., the substrings do not share any common characters with the same position in the string s).

Input: The first line of the standard input contains a string s with a maximum length of 100.

Output: On a single line of the standard output, print the longest substring of s that repeats without overlapping. If such a substring does not exist, print -. If there are multiple substrings of the same maximum length, print the first one that appears in s (from left to right).

Example 1
Input:
banana
Output:
an

Example 2
Input:
abcdabecd
Output:
ab

Example 3
Input:
grad
Output:
-
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

pair<int, int> rec(int n1, int n2)
{
	vector<vector<int>> dp(n1+1, vector<int>(n2+1, 0));
	int mx = 0;
	int endIndex = 0;
	for (int i = 1; i <= n1; i++)
	{
		for (int j = i + 1; j <= n2; j++)
		{
			if (a[i-1] == a[j-1] && dp[i-1][j-1] < j - i)
				dp[i][j] = dp[i-1][j-1] + 1;
			
			if (dp[i][j] > mx)
			{
				endIndex = j;
				mx = dp[i][j];
			}
		}
	}
	return make_pair(mx, endIndex);
}

int main()
{
	FIO
	cin >> a;
	pair<int, int> p = rec(a.size(), a.size());
	if (p.first == 0)
		cout << "-" << endl;
	else
		cout << a.substr(p.second - p.first, p.first) << endl;
}
