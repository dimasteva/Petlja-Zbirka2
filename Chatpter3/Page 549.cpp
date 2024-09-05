/*
Task: Number of Ways to Decode

The text consisting only of uppercase English alphabet letters is encoded by replacing each letter with its ordinal number in the alphabet. For example, the text BABAC is encoded as the string of digits 21213.
However, since there are no spaces between the digits, decoding is not unambiguous. For example, 21213 can represent BABAC, but also BAUC, BABM, BLAC, BLM, UBAC, UUC, UBM. Write a program that determines the number of ways the entered string of digits can be decoded.

Input: The first line of the standard input contains a string of digits obtained by encoding some text - the string has at most 100 digits.

Output: Print the number of ways this string can be decoded (assume that the number can fit into a 64-bit unsigned integer).

Example 1
Input
21213
Output
8

Example 2
Input
1111111111
Output
89

Example 3
Input
5555555555
Output
1

Example 4
Input
1010101010
Output
1

Example 5
Input
1111011111
Output
24

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

ll rec(string s)
{
	int n = s.size();
	vector<ll> dp(n + 1);
	dp[n] = 1;
	dp[n - 1] = s[n-1] != '0';
	for (int i = n - 2; i >= 0; i--)
	{
		if (s[i] == '0')
			dp[i] = 0;
		else
		{
			dp[i] = dp[i + 1];
			if (10 * (s[i] - '0') + s[i + 1] - '0' <= 26)
				dp[i] += dp[i + 2];
		}
	}
	return dp[0];
}

int main()
{
	string s; cin >> s;
	cout << rec(s);
}
