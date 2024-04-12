/*
Task: Path through the labyrinth

Write a program that determines whether it is possible to reach from the upper left to the lower right corner in a rectangular labyrinth.

Input: The dimensions of the labyrinth m and n are read from the standard input separated by a single space. After that, a matrix representing the labyrinth is read. Fields that can be traversed are marked with the character '.', and fields that are obstacles are marked with the character 'x'.

Output: Print 'da' to standard output if a path exists, otherwise print 'ne'.

Example 1:
Input
8 8
.x.....x
.x.x.x.x
.x.x.x.x
.x.x.x.x
.x.x.x.x
.x.x.x.x
.x.x.x.x
...x.x..
Output
da

Example 2:
Input
8 8
.x..x..x
.x.x.x.x
.x.x.x.x
.x.x.x.x
.x...x.x
.x.x.x.x
.x.x.x.x
...x.x..
Output
ne
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define forn(i, n)          for (int i = 0; i < int(n); i++)
#define forn1(i, n)          for (int i = 1; i < int(n); i++)
#define pb                  push_back
#define MOD                 1000000007 // 998244353
#define FIO                 ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(c) (c).begin(), (c).end()

bool isValid(int x, int y, int n, int m)
{
    return (x >= 0 && x < n && y >= 0 && y < m);
}

bool dfs(vector<string>& a, int n, int m, int x, int y)
{
    if (x == n - 1 && y == m - 1)
        return true;
    else
    {
        int dx[] = {-1, 1, 0, 0};
        int dy[] = {0, 0, 1, -1};
        forn(i, 4)
        {
            int xx = x + dx[i];
            int yy = y + dy[i];
            if (isValid(xx, yy, n, m) && a[xx][yy] == '.')
            {
                a[xx][yy] = 'x';
                if (dfs(a, n, m, xx, yy))
                    return true;
            }
        }
    }
    return false;
}

int main()
{
    int n, m; cin >> n >> m;
    vector<string> a(n);
    forn(i, n)
        cin >> a[i];
    if (dfs(a, n, m, 0, 0))
    {
        cout << "da" << endl;
    } else
    {
        cout << "ne" << endl;
    }
}
