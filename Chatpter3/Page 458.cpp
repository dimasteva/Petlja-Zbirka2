/*
Task: Length of the longest viable path
Given a matrix A of dimensions v×k filled with values 0 and 1 (where 0 represents a passable field and 1 an obstacle). Write a program to determine the number of steps on the longest viable path from a given position (vs, ks) to a given position (vc, kc). By a step, we mean transitioning from one field to one of its 4 adjacent fields. From each field, it is allowed to move to 4 adjacent fields (up, down, left, and right) if they are passable. All fields on the path must be different (we can step on each field at most once). There are no obstacles on the starting or ending fields.

Input: The first line of the standard input contains the dimensions of the matrix v and k (1 < v, k ≤ 10), two natural numbers separated by a single space. Then, the elements of the matrix are found on the standard input (in n lines with m numbers separated by single spaces). In the last line of the standard input, there are 4 natural numbers vs, ks, vc, kc (0 ≤ vs, vc < v, 0 ≤ ks, kc < k).

Output: Display a natural number on the standard output representing the number of steps on the longest viable path from the starting position (vs, ks) to the ending position (vc, kc). If a viable path does not exist, display -1.

Example
Input
4 5
1 0 0 1 0
0 0 0 1 1
0 1 0 0 0
0 0 0 0 0
1 0 3 4
Output
10
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

int x, y, X, Y;
int n, m;
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, 1, -1};

bool isValid(int x, int y)
{
    return (x >= 0 && x < n && y >= 0 && y < m);
}

int dfs(vector<vector<int>>& a, int x, int y, int count)
{
    if (x == X && y == Y)
        return count;
    
    int mx = INT_MIN;
    a[x][y] = 1;
    forn(i, 4)
    {
        int xx = x + dx[i];
        int yy = y + dy[i];
        if (isValid(xx, yy) && a[xx][yy] == 0)
            mx = max(mx, dfs(a, xx, yy, count + 1));
    }
    a[x][y] = 0;
    return mx;
}

int main()
{
   cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    forn(i, n)
        forn(j, m)
            cin >> a[i][j];
    cin >> x >> y >> X >> Y;
    cout << dfs(a, x, y, 0);
}
