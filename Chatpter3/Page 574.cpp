/*
Task: Falling Balls

A ball is dropped from a height and falls through a space filled with obstacles. When there are no obstacles below it, the ball falls straight down. When there is an obstacle beneath it, it stops, and we can push it either to the left or right to the edge of the obstacle, after which it continues falling. Write a program that determines, for each starting position in the top row, whether the ball can reach the bottom.

Input: A matrix of characters is read from the standard input. Obstacles are marked with the character 'x', and empty spaces are marked with the character '.'.

Output: Print a string of zeros and ones to the standard output (for positions from which the ball cannot reach the bottom, print 0, and for those from which it can, print 1).

Example:

Input:
x........x...x  
xx.x.....xx..x  
...x....xxx.xx  
..xxx........x  
..xxx..xx....x  
..xxxxxxx.xxxx  

Output:
01110001101110
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

int main()
{
	vector<string> v;
	string s;
	while(cin >> s)
	{
		v.push_back(s);
	}
	int n = v.size();
	int m = v[0].size();
	
	vector<vector<int>> dp(n, vector<int>(m, 0));
	
	for (int i = 0; i < m; i++)
		if (v[n-1][i] == '.')
			dp[n-1][i] = 1;
	
	for (int i = n - 2; i >= 0; i--)
	{
		for (int j = 0; j < m; j++)
		{
			if (v[i][j] == 'x')
				dp[i][j] = 0;
			else
			{
				if (v[i+1][j] == '.' && dp[i+1][j] == 1)
					dp[i][j] = 1;
				else if (v[i+1][j] == 'x')
				{
					int k = j;
					while(k > 0 && v[i+1][k-1] == 'x' && v[i][k-1] == '.')
						k--;
					
					if (k > 0 && v[i][k-1] == '.' && dp[i+1][k-1] == 1)
						dp[i][j] = 1;
					
					k = j;
					while(k < m - 1 && v[i+1][k+1] == 'x' && v[i][k+1] != 'x')
						k++;
					
					if (k < m - 1 && v[i][k+1] == '.' && dp[i+1][k+1] == 1)
						dp[i][j] = 1;
				}
			}
		}
	}
	for (int i = 0; i < m; i++)
		cout << dp[0][i];
}
