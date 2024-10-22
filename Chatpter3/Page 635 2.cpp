/*
Task: Number of white regions
Write a program that determines the number of white regions in a black-and-white matrix (0 – white, 1 – black). A white region consists of connected white fields. Two white fields are connected if they are the starting and ending fields of a sequence of white fields where consecutive fields share a common side.
Input: The first line of the standard input reads the number of rows in the matrix n (2 ≤ n ≤ 20), and the second line reads the number of columns m (2 ≤ m ≤ 20). In the next n rows, m numbers with a value of 0 or 1 are read.
Output: The number of white regions.
Example
Input
5
6
1 1 1 1 1 0
1 1 0 1 1 0
0 0 0 0 0 0
1 1 1 1 1 1
0 1 0 0 0 0
Output
3
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define forn(i, n) for (int i = 0; i < int(n); i++)
#define all(c) (c).begin(), (c).end()
#define MOD 1000000007 // 998244353
#define FIO                \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);

bool isValid(int x, int y, int n, int m)
{
	return (x >= 0 && y >= 0 && x < n && y < m);
}

int dfs(vector<vector<int>>& a, int i, int j)
{
	stack<pair<int, int>> st;
	set<pair<int, int>> s;
	int dx[] = {-1, 0, 0, 1};
	int dy[] = {0, -1, 1, 0};
	st.push({i, j});
	while(!st.empty())
	{
		int x = st.top().first;
		int y = st.top().second;
		st.pop();
		forn(i, 4)
		{
			int xx = x + dx[i];
			int yy = y + dy[i];
			if (isValid(xx, yy, a.size(), a[0].size()) && a[xx][yy] == 1 && s.find({xx, yy}) == s.end())
			{
				st.push({xx, yy});
			}
		}
		s.insert({x, y});
	}
	return s.size();
}

int main()
{
    FIO;
    int n, m; cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    forn(i, n)
    	forn(j, m)
    		cin >> a[i][j];
    
    int mx = 0;
    forn(i, n)
    {
    	forn(j, m)
    	{
    		if (a[i][j] == 1)
    		{
    			mx = max(mx, dfs(a, i, j));
			}
		}
	}
	cout << mx;
}
