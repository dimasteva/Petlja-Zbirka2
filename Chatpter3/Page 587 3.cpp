/*
Task: Maximum Path Through a Matrix  
In a table of dimensions n × n, the cells are filled with digits from 0 to 9. A player starting at the top-left corner of the table can move to an adjacent right cell or an adjacent bottom cell in one step. The goal is to reach the bottom-right cell such that the sum of the values in the traversed cells is maximized. Write a program that determines the maximum sum that the player can achieve when moving from the top-left to the bottom-right corner, along with the movement instructions: right, down, which ensure movement over the cells that yield the maximum sum (if there are multiple possible paths, print any).  
Input: In the first line of standard input, the number of rows in the table n (1 ≤ n ≤ 30) is entered, followed by n rows of n digits from 0 to 9.  
Output: In the first line of standard output, display the desired maximum sum, and in the following lines, print the movement instructions: right, down - each on a new line, which ensure movement over the cells that yield the maximum sum.  
Example  
Input  
5  
4 3 5 7 5  
1 9 4 1 3  
2 3 5 1 2  
1 3 1 2 0  
4 6 7 2 1  
Output  
38  
right  
down  
down  
down  
down  
right  
right  
right  
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


int main()
{
	int n; cin >> n;
	vector<vector<ll>> dp(n, vector<ll>(n));
	vector<vector<string>> m(n, vector<string>(n));
	forn(i, n)
		forn(j, n)
			cin >> dp[i][j];
	
	for (int i = 1; i < n; i++)
	{
		dp[0][i] += dp[0][i-1];
		m[0][i] = m[0][i-1] + "desno\n";
		dp[i][0] += dp[i-1][0];
		m[i][0] = m[i-1][0] + "dole\n";
	}
	
	for (int i = 1; i < n; i++)
	{
		for (int j = 1; j < n; j++)
		{
			dp[i][j] += max(dp[i-1][j], dp[i][j-1]);
			if (dp[i-1][j] > dp[i][j-1])
			{
				m[i][j] = m[i-1][j] + "dole\n";
			} else
				m[i][j] = m[i][j-1] + "desno\n";
		}
	}
	cout << dp[n-1][n-1] << endl;
	cout << m[n-1][n-1];
}
