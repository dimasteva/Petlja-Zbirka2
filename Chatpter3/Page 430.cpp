/*
Task: Colored Maze
In front of you is an unusual path. The path consists of fields defined by a matrix, and each field is colored with one of 4 colors (red fields are marked with the number 1, blue with the number 2, yellow with the number 3, and green with the number 4). The rules of movement are such that you must start from a red field, move from a red field only to a blue one, from blue to yellow, from yellow to green, and from green back to red (you must start with the number 1 and during movement, the numbers must be 1, 2, 3, 4, 1, 2, 3, 4, ...). Write a program that determines whether you can reach the upper row from the bottom row of the path.

Input: The dimensions of the path m and n (1 ≤ m, n ≤ 20) are entered from standard input, separated by a space. After that, a matrix filled with numbers from 1 to 4 (without spaces between them) is entered.

Output: Print "da" to standard output if the path exists, or "ne" if the path does not exist.

Example:
Input:
5 6
143222
414344
323244
124123
343211

Output:
da

Explanation:
One of the paths by which it can be reached is as follows:
5 6
1.....
4143..
32.2..
..41..
..321.
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define MOD 1000000007
#define all(c) (c).begin(), (c).end()

int n, m;
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, 1, -1};

bool isValid(int x, int y)
{
    return (x >= 0 && x < n && y >= 0 && y < m);
}

bool dfs(vector<vector<int>>& a, int x, int y)
{
    if (x == 0)
        return true;
    
    int temp = a[x][y];
    a[x][y] = 0;
    forn(i, 4)
    {
        int xx = x + dx[i];
        int yy = y + dy[i];
        if (isValid(xx, yy) && (temp - a[xx][yy] == -1 || temp - a[xx][yy] == 3))
        {
            if (dfs(a, xx, yy))
                return true;
        }
    }
    a[x][y] = temp;
    return false;
}

bool found(vector<vector<int>>& v)
{
    forn(i, m)
    {
        if (dfs(v, n - 1, i))
            return true;
    }
    return false;
}

int main()
{
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(m));
    for(int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for(int j = 0; j < m; j++)
            v[i][j] = s[j] - '0';
    }
    
    if (found(v))
        cout << "da";
    else
        cout << "ne";
}

