/*
Task: Knight's Tour
Write a program that determines all possible tours of a chessboard given the dimensions of a knight's move. The knight starts from the upper left corner of the board and moves in the shape of the Cyrillic letter "Г" (two squares horizontally and one vertically, or two squares vertically and one horizontally), visiting each square exactly once during the tour.
Input: The dimensions of the board m × n are entered from the standard input (2 ≤ m, n ≤ 8).
Output: Print all possible sequences of visiting squares to the standard output (in any order). Count the squares starting from 1. Print each number with two characters (add a space before single-digit numbers) and print a space after each number. After each successful tour, print an empty line.
Example
Input
3 4
Output
1 4 7 10
8 11 2 5
3 6 9 12

1 4 7 10
12 9 2 5
3 6 11 8
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

int dx[] = {-2, -2, -1, 1, 2, 2, 1, -1};
int dy[] = {-1, 1, 2, 2, 1, -1, -2, -2};
int n, m;

bool isValid(int x, int y)
{
    return (x >= 0 && x < n && y >= 0 && y < m);
}

void print(vector<vector<int>>& a)
{
    forn(i, n)
    {
        forn(j, m)
            cout << setw(2) << a[i][j] << " ";
        cout << endl;
    }
    cout << endl;
}

void dfs(vector<vector<int>>& a, int x, int y, int position)
{
    a[x][y] = position;
    if (position == n * m)
        print(a);
    forn(i, 8)
    {
        int xx = x + dx[i];
        int yy = y + dy[i];
        if (isValid(xx, yy) && a[xx][yy] == 0)
            dfs(a, xx, yy, position + 1);
    }
    a[x][y] = 0; 
}

int main()
{
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(m, 0));

    dfs(v, 0, 0, 1);
}
