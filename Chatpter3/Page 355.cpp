/*
Task: Largest Infected Area
Given a matrix representing the infection status of the plant world in a particular area, where 0 represents an uninfected field and 1 represents an infected field, determine the number of fields in the largest infected area. Two infected fields belong to the same area if their sides are adjacent.

Input: The first line of standard input contains the number of rows in the matrix, n (2 ≤ n ≤ 20), and the second line contains the number of columns, m (2 ≤ m ≤ 20). The next n lines each contain m numbers with values of 0 or 1.

Output: The number of fields in the largest infected area (0 if there are no infected fields).

Example
Input
5
13
1 1 1 0 1 0 1 1 1 0 0 1 0
1 1 1 0 0 0 1 1 0 1 1 0 1
0 0 1 0 0 1 0 1 1 0 1 1 1
1 0 1 0 1 0 0 1 1 1 0 0 0
0 1 0 0 0 0 1 1 1 0 1 1 1
Output
13
*/

#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ll;

#define forn(i, n) for (int i = 0; i < int(n); i++)
#define forn1(i, n) for (int i = 1; i < int(n); i++)
#define all(c) (c).begin(), (c).end()
#define pb push_back
#define MOD 1000000007 // 998244353
#define FIO \
    ios::sync_with_stdio(false); \
    cin.tie(0); \
    cout.tie(0);

const int N = 20, M = 20;

bool Valid(int x, int y, int n, int m)
{
    return (x >= 0 && y >= 0 && x < n && y < m);
}

int Calc(int x0, int y0, int v[N][M], int n, int m)
{
    int cnt = 0;
    stack<pair<int, int>> s;
    s.emplace(x0, y0);
    while(!s.empty())
    {
        auto p = s.top();
        s.pop();
        int x = p.first;
        int y = p.second;
        if (!v[x][y]) continue;
        v[x][y] = 0;
        cnt++;

        int dx[] = { -1, 0, 1, 0 };
        int dy[] = { 0, 1, 0, -1 };

        forn(i, 4)
        {
            int xx = x + dx[i], yy = y + dy[i];
            if (Valid(xx, yy, n, m) && v[xx][yy] == 1)
            {
                s.emplace(xx, yy);
            }
        }
    }
    return cnt;
}

int main() {
    FIO;
    int n, m; cin >> n >> m;
    int v[N][M];
    forn(i, n)
        forn(j, m)
            cin >> v[i][j];
    
    int cnt = 0;
    forn(i, n)
        forn(j, m)
            if (v[i][j] == 1)
                cnt = max(cnt, Calc(i, j, v, n, m));

    cout << cnt;
}

