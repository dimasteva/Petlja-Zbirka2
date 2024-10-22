/*
Task: P-Q knights
Write a program to determine the minimum number of (P, Q) knights needed to control (visit) all the fields of a chessboard with dimensions nxm.
A (P, Q) knight is a piece that can jump P squares horizontally and Q squares vertically, or Q squares horizontally and P squares vertically in one move. For example, a (1, 2) knight is a standard chess knight.
A piece or group of pieces control a field if they can reach it in zero or more jumps. For example, to control a standard 8x8 chessboard, two (1, 1) knights are needed (these are pieces similar to bishops, but they move one square at a time).
Input: The first line of the standard input reads the number of rows m (2 ≤ m ≤ 20), the second line reads the number of columns n (2 ≤ n ≤ 20), the third line reads the jump length P, and the fourth line reads the jump length Q.
Output: A natural number representing the number of (P, Q) knights.
Example
Input
8
8
3
5
Output
10
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define forn(i, n) for (int i = 0; i < int(n); i++)
#define forn1(i, n) for (int i = 1; i < int(n); i++)
#define all(c) (c).begin(), (c).end()
#define pb push_back
#define MOD 1000000007 // 998244353
#define FIO                \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);

bool isValid(int x, int y, int n, int m)
{
	return (x >= 0 && y >= 0 && x < n && y < m);
}

int dfs(int n, int m, int p, int q)
{
	vector<vector<int>> a(n, vector<int>(m, 0));
	stack<pair<int, int>> st;
	int count = 0;
	forn(i, n)
	{
		forn(j, m)
		{
			if (a[i][j] == 0)
			{
				count++;
				a[i][j] = 1;
				st.push({i, j});
				while(!st.empty())
				{
					int x = st.top().first;
					int y = st.top().second;
					st.pop();
					int dx[] = {-p, -p, q, -q, p, p, -q, q};
					int dy[] = {q, -q, p, p, q, -q, -p, -p};
					forn(k, 8)
					{
						int xx = x + dx[k];
						int yy = y + dy[k];
						if (isValid(xx, yy, n, m) && a[xx][yy] == 0)
						{
							a[xx][yy] = 1;
							st.push({xx, yy});
						}		
					}
				}
			}
		}
	}
	return count;
}

int main()
{
    FIO;
    int n, m; cin >> n >> m;
    int p, q; cin >> p >> q;
    
    cout << dfs(n, m, p, q);
}
