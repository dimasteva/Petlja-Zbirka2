/*
Task: Falling Ball
A ball is dropped from a height and falls through space filled with obstacles. When there are no obstacles below it, it falls directly downwards. When there is an obstacle below it, it stops, and then we can push it either left or right to the edge of the obstacle, after which it continues to fall. Write a program to determine if the ball can reach the bottom.

Input: The character matrix is read from standard input until the end of input (all rows of standard input are of the same length and represent rows of the matrix). Neither the length nor the width of the matrix is greater than 16. Obstacles are marked with the character 'x', empty spaces with '.', while the initial position of the ball is determined by the character 'O' and is located in the topmost row.

Output: Print "da" to standard output if the ball can fall to the bottom, or "ne" if it cannot.

Example 1:
Input:
O.......x...x
xxx.....xx..x
xxx....xxx.xx
xxxx........x
xxxx..xx....x
xxxxxxxx.xxxx

Output:
ne

Example 2:
Input:
.O......x...x
xxx.....xx..x
.......xxx.xx
.xxx........x
.xxxxx.x....x
.xxxxxxx.xxxx

Output:
da
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define MOD 1000000007
#define all(c) (c).begin(), (c).end()

int n = 0, m = 0;

char mat[16][16];
int dx[] = {0, 0};
int dy[] = {1, -1};

bool isValid(int x, int y)
{
    return (x >= 0 && x < n && y >= 0 && y < m);
}

bool dfs(int x, int y)
{
    while(x < n - 1 && mat[x + 1][y] == '.')
        x++;
    if (x == n - 1)
        return true;
    char temp = mat[x][y];
    mat[x][y] = 'x';
    forn(i, 2)
    {
        int xx = x + dx[i];
        int yy = y + dy[i];
        if (isValid(xx, yy) && mat[xx][yy] == '.')
            if (dfs(xx, yy))
                return true;
    }
    mat[x][y] = temp;
    return false;
}

int main()
{
    string s;
    int x, y;
    while(getline(cin, s))
    {
        m = s.size();
        n++;
        forn(i, m)
        {
            mat[n - 1][i] = s[i];
            if (s[i] == 'O')
            {
                x = n - 1;
                y = i;
            }
        }
    }
    if (dfs(x, y))
        cout << "da";
    else
        cout << "ne";
}
