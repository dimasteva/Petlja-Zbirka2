/*
Task: All Summations of Matrix Traversal
Write a program that determines all possible sums of numbers that can be obtained by traversing the fields of a matrix from the upper left corner, moving down or right at each step until reaching the field in the lower right corner.
Input: The standard input reads an integer n (3 ≤ n ≤ 10), followed by the next n lines representing the rows of the matrix (elements of each row are separated by spaces).
Output: Print all possible sums, separated by spaces, each on a separate line.
Example
Input
3
10 7 7
7 7 5
4 7 2
Output
30 31 33
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

int n;
int dx[] = {1, 0};
int dy[] = {0, 1};
set<int> s;

bool isValid(int x, int y)
{
    return (x >= 0 && x < n && y >= 0 && y < n);
}

void traversal(vector<vector<int>>& a, int x, int y, int sum)
{
    int temp = a[x][y];
    a[x][y] = -1;
    if (x == n - 1 && y == n - 1)
    {
        sum += temp;
        s.insert(sum);
    } else
    {
        forn(i, 2)
        {
            int xx = x + dx[i];
            int yy = y + dy[i];
            if (isValid(xx, yy) && a[xx][yy] != -1)
                traversal(a, xx, yy, sum + temp);
        }
    }
    a[x][y] = temp;

}

int main()
{
    cin >> n;
    vector<vector<int>> v(n, vector<int>(n));
    forn(i, n)
        forn(j, n)
            cin >> v[i][j];
    traversal(v, 0, 0, 0);
    for (auto itr : s)
        cout << itr << " ";
}
