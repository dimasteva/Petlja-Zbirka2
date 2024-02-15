/*
Task: Number of White Regions
Write a program that determines the number of white regions in a black-and-white matrix (0 - white, 1 - black). A white region consists of connected white fields. Two white fields are connected if they are the starting and ending points of a sequence of white fields where consecutive fields share a side.

Input: The first line of standard input contains the number of rows in the matrix, n (2 ≤ n ≤ 20), and the second line contains the number of columns, m (2 ≤ m ≤ 20). The next n lines each contain m numbers with values of 0 or 1.

Output: Print the number of white regions.

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

void Mark(int i, int j, int v[N][M], int n, int m)
{
    v[i][j] = 1;
    int dx[] = {-1, 0, 0, 1};
    int dy[] = {0, 1, -1, 0};

    forn(k, 4)
    {
        int xx = i + dx[k], yy = j + dy[k];
        if (Valid(xx, yy, n, m) && v[xx][yy] == 0)
            Mark(xx, yy, v, n, m);
    }
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
            if (v[i][j] == 0)
            {
                Mark(i, j, v, n, m);
                cnt++;
            }

    cout << cnt;
}
