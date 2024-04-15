/*
Task: Maximum Safe Path
Given a matrix Anxm containing mines marked with 0, and other fields containing natural numbers. The goal is to find a safe path from any field in the first column to any field in the last column of the matrix. A path is safe if it does not contain a mine and does not contain a field adjacent to it, above, below, left, or right, with a mine. We can move through the matrix in four directions: up, down, right, and left, and we can only step on each field at most once. Determine the maximum sum of numbers that can be found on any safe path from the first to the last column.
Input: The first line of standard input contains the dimensions of the matrix, two natural numbers, m and n (1 < m, n ≤ 20). In the next n lines of standard input, there are m integers greater than or equal to 0, separated by a single space character, representing the elements of the matrix.
Output: Display a natural number on standard output representing the maximum sum of a safe path from the first to the last column. If there is no safe path, display -1.
Example
Input
4 4
5 1 2 0
1 2 3 4
2 4 1 1
0 1 1 1
Output
17
Explanation
1 + 5 + 1 + 2 + 4 + 1 + 1 + 1 + 1 = 17
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define MOD 1000000007
#define all(c) (c).begin(), (c).end()

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, 1, -1};
int n, m; 
bool isValid(int x, int y, int n, int m)
{
    return (x >= 0 && x < n && y >= 0 && y < m);
}

void markUnsafe(vector<vector<int>>& a, int n, int m)
{
    forn(i, n)
    {
        forn(j, m)
        {
            if (a[i][j] == 0)
            {
                forn(k, 4)
                {
                    int xx = i + dx[k];
                    int yy = j + dy[k];
                    if (isValid(xx, yy, n, m) && a[xx][yy] != 0)
                        a[xx][yy] = -1;
                }
            }
        }
    }
}

int maxPath(int v, int k, vector<vector<int>>& a) {
    int mx = -1;
    if (v == n - 1)
        mx = a[v][k];
    int tmp = a[v][k];
    a[v][k] = -2;
    for (int i = 0; i < 4; i++) {
        int vv = v + dx[i], kk = k + dy[i];
        if (isValid(vv, kk, n, m) && a[vv][kk] > 0) {
            int path = maxPath(vv, kk, a);
            if (path != -1)
              mx = max(mx, path + tmp);
        }
    }
    a[v][k] = tmp;
    return mx;
}



int main()
{
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));

    forn(i, n)
        forn(j, m)
            cin >> a[i][j];
    
    markUnsafe(a, n, m);
    int mx = -1;
    forn(k, m)
    {
        if (a[0][k] > 0)
        {
            int path = maxPath(0, k, a);
            if (path != -1)
              mx = max(mx, path);
        }
    }
    cout << mx << endl;
}
