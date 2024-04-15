/*
Task: Sudoku
Write a program that fills in a Sudoku puzzle, whose goal is to arrange numbers from 1 to 9 in a 9 by 9 matrix, so that in each row, in each column, and in each of the 9 3 by 3 squares, all numbers are different.
Input: The standard input reads a 9 by 9 matrix in which some numbers are already entered, and zeros are entered in the empty fields.
Output: Print the solution to the puzzle to the standard output (test cases will be such that the solution is surely unique).
Example
Input
749030680
006508000
000760324
800057060
407000508
050980002
184076000
000403800
063010247
Output
749132685
326548179
518769324
892357461
437621598
651984732
184276953
275493816
963815247
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define MOD 1000000007
#define all(c) (c).begin(), (c).end()

int mat[9][9];

void print()
{
    forn(i, 9)
    {
        forn(j, 9)
            cout << mat[i][j];
        cout << endl;
    }
}

bool check(int x, int y)
{
    for (int i = 0; i < 9; i++)
    {
        if (mat[x][i] == mat[x][y] && y != i)
            return false;
        if (mat[i][y] == mat[x][y] && x != i)
            return false;
    }
    int x1 = x / 3, y1 = y / 3;
    for (int k = x1 * 3; k < (x1 + 1) * 3; k++)
        for (int l = y1 * 3; l < (y1 + 1) * 3; l++)
            if ((k != x || l != y) && mat[x][y] == mat[k][l])
                return false;
    return true;
}

bool dfs(int x, int y)
{
    if (x == 8 && y == 9)
        return true;
    if (y == 9)
        return dfs(x + 1, 0);
    else if (mat[x][y] != 0)
        return dfs(x, y + 1);
    else
    {
        for (int i = 1; i <= 9; i++)
        {
            mat[x][y] = i;
            if (check(x, y))
                if (dfs(x, y + 1))
                    return true;
        }
        mat[x][y] = 0;
    }
    return false;
}

int main()
{
    forn(i, 9)
    {
        string s; cin >> s;
        forn(j, 9)
        {
            mat[i][j] = s[j] - '0';
        }
    }
    if (dfs(0, 0))
    {
        print();
    } else
    {
        cout << "nema";
    }
}
