/*
Task: Edit Distance

The edit distance between two strings is defined in terms of the operations of insertion, deletion, and substitution of letters in the first word to obtain the second word. Each of these three operations has its own cost. Define a program that calculates the minimum cost of the operations required to transform the first string into the second. For example, if the cost of each operation is unitary, then the string "zdravo" can be transformed into "bravo!" most efficiently by substituting the letter 'z' with 'b', deleting the letter 'd', and inserting the character '!'.

Input: Two strings of a maximum length of 100 characters are read from standard input, followed by the costs of the insertion, deletion, and substitution operations (natural numbers from 1 to 10, each on a separate line).

Output: The program should print the calculated edit distance.

Example 1
Input:
zdravo
bravo! 
1 
1
1 
Output: 
3

Example 2
Input: 
kitten 
sitting 
1
2
3 
Output: 
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

int a, b, c;

ll rec(string s1, string s2, int n1, int n2)
{
	vector<vector<int>> dp(n1 + 1, vector<int>(n2 + 1));
	dp[0][0] = 0;
	for (int i = 0; i <= n1; i++)
		dp[i][0] = i * b;
	for (int j = 0; j <= n2; j++)
		dp[0][j] = j * a;
	
	for (int i = 1; i <= n1; i++)
	{
		for (int j = 1; j <= n2; j++)
		{
			if (s1[i-1] == s2[j-1])
				dp[i][j] = dp[i-1][j-1];
			else
			{
				int op1 = dp[i-1][j] + a;
				int op2 = dp[i][j-1] + b;
				int op3 = dp[i-1][j-1] + c;
				dp[i][j] = min({op1, op2, op3});
			}
		}
	}
	return dp[n1][n2];
	
}

int main()
{
	string x, y;
	cin >> x >> y;
	cin >> a >> b >> c;
	cout << rec(x, y, x.size(), y.size());
}
