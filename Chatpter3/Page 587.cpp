/*
Task: Maximum Sum on a Path through a Matrix
In a table with dimensions n × n, the cells are filled with digits from 0 to 9. A player, starting in the top-left corner of the table, can move either to the right or down in one step. The goal is to reach the bottom-right cell in such a way that the sum of the values in the traversed cells is maximized. Write a program that determines the maximum sum that the player can achieve when moving from the top-left to the bottom-right corner.
Input: In the first line of standard input, the number of rows in the table n (1 ≤ n ≤ 30) is given, followed by n rows of n digits from 0 to 9.
Output: In the first line of standard output, display the required maximum sum value.
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
	vector<vector<int>> a(n, vector<int>(n));
	forn(i, n)
	{
		forn(j, n)
			cin >> a[i][j];
	}
	for (int i = 1; i < n; i++)
	{
		a[i][0] += a[i-1][0];
		a[0][i] += a[0][i-1];
	}
	for (int i = 1; i < n; i++)
	{
		for (int j = 1; j < n; j++)
		{
			a[i][j] += max(a[i-1][j], a[i][j-1]);
		}
	}
	cout << a[n-1][n-1] << endl;
}
