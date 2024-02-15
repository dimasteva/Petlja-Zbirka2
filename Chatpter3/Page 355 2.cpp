/*
Task: Minesweeper Opening
Write a program that displays the content of the Minesweeper game field (if you are not familiar with how it looks, search on the internet) after opening a particular field.

Input: Read from standard input a 10x10 matrix where 1s represent bombs and 0s represent empty fields. In the next line, read the coordinates of the field to be opened (row and column numbers between 0 and 9, separated by a single space).

Output: Print to standard output the state that the user sees after opening that field. If there is a bomb on the field, print "boom". Otherwise, display a 10x10 matrix where unopened fields are represented by 'x', empty opened fields by '.', and opened fields with bombs in the vicinity by the number of bombs around them.

Example
Input
0100010100
0100111000
1000000000
1100000110
1000000000
1100000100
0111000011
1100001110
0011100000
1110000001
5 5
Output
xxxxxxxxxx
xxxxxxxxxx
xx21233xxx
xx1...1xxx
xx2...2xxx
xx421.1xxx
xxxx113xxx
xxxxxxxxxx
xxxxxxxxxx
xxxxxxxxxx
*/
#include <bits/stdc++.h>

using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)
#define FIO \
    ios::sync_with_stdio(false); \
    cin.tie(0); \
    cout.tie(0);

const int N = 10;
int dx[] = {-1, 0, 1, -1, 1, -1, 0, 1};
int dy[] = {-1, -1, -1, 0, 0, 1, 1, 1};

bool Valid(int x, int y)
{
    return (x >= 0 && y >= 0 && x < N && y < N);
}

void Matrix(vector<vector<int>>& v, int x, int y)
{
    if (!Valid(x, y) || v[x][y] != 0)
        return;

    int cnt = 0;
    forn(i, 8)
    {
        int xx = x + dx[i], yy = y + dy[i];
        if (Valid(xx, yy) && v[xx][yy] == -1)
            cnt++;
    }

    if (cnt == 0)
    {
        v[x][y] = -2;
        forn(i, 8)
            Matrix(v, x + dx[i], y + dy[i]);
    }
    else
        v[x][y] = cnt;
}

int main() {
    FIO;
    vector<vector<int>> v(N, vector<int>(N));
    forn(i, N)
        forn(j, N)
        {
            char c;
            cin >> c;
            v[i][j] = (c == '1' ? -1 : 0);
        }
    
    int x, y; cin >> x >> y;
    if (v[x][y] == -1)
    {
        cout << "boom" << endl;
        return 0;
    }
    Matrix(v, x, y);

    forn(i, N)
    {
        forn(j, N)
        {
            if (v[i][j] == 0 || v[i][j] == -1)
                cout << "x";
            else if (v[i][j] == -2)
                cout << ".";
            else
                cout << v[i][j];
        }
        cout << endl;
    }
}
