/*
Task: Number of Subsequence Occurrences
Write a program that, given two strings x and y, determines the number of times string y appears as a subsequence of string x.
String y is a subsequence of string x if it can be obtained by deleting any number of characters from string x.
Input: The first line of the standard input contains the string x, and the second line contains the string y. The lengths of the strings are at most 100 characters.
Output: Print the number of occurrences of string y as a subsequence of string x on the standard output.

Example:
Input:
abcbca
abc
Output:
3

Explanation:
The positions of subsequence occurrences are marked with uppercase letters.
ABCbca
ABcbCa
AbcBCa
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

string x, y;

ll rec()
{
	int n = x.size();
	int m = y.size();
	vector<ll> dp(m + 1);
	dp[0] = 1;
	for (int i = 1; i <= n; i++)
	{
		for (int j = m; j >= 1; j--)
		{
			if (x[i-1] == y[j-1])
				dp[j] += dp[j-1];
		}
	}
	return dp[m];
}

int main()
{
	cin >> x >> y;
	cout << rec();
}
