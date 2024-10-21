/*
Task: Number of white areas  
Write a program that determines the number of white areas in a black-and-white matrix (0 - white, 1 - black). A white area consists of connected white cells. Two white cells are connected if they are the starting and ending cells of a sequence of white cells where consecutive cells share a side.  
Input: In the first line of standard input, read the number of rows in the matrix n (2 ≤ n ≤ 20), and in the second line the number of columns m (2 ≤ m ≤ 20). In the next n rows, read m numbers whose values are either 0 or 1.  
Output: The number of white areas.  
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

void mark(vector<vector<int>>& a, int x, int y)
{
	int dx[] = {-1, 0, 0, 1};
	int dy[] = {0, -1, 1, 0};
	
	stack<pair<int, int>> st;
	st.push({x, y});
	
	while(!st.empty())
	{
		int x1 = st.top().first, y1 = st.top().second;
		a[x1][y1] = 1;
		st.pop();
		
		forn(i, 4)
		{
			int xx = x1 + dx[i];
			int yy = y1 + dy[i];
			
			if (isValid(xx, yy, a.size(), a[0].size()) && a[xx][yy] == 0)
				st.push({xx, yy});
		}
	}
}

int main()
{
    FIO;
    int n, m; cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    forn(i, n)
    	forn(j, m)
    		cin >> a[i][j];
    
    int score = 0;
    forn(i, n)
    {
    	forn(j, m)
    	{
    		if (a[i][j] == 0)
    		{
    			score++;
    			mark(a, i, j);
			}
		}
	}
	cout << score << endl;
}
