/*
Task: Longest downhill path
In the city, there are m streets running east-west and n streets running north-south. Each east-west street intersects with every north-south street, forming m · n intersections. The matrix A with dimensions m×n provides the elevations of these intersections. Pero rides his bicycle on the streets of the city and wants to reach from intersection (vs, kc) to intersection (vc, kc), but he wants to go downhill only, meaning he always moves from an intersection of higher elevation to an intersection of lower elevation. Write a program to determine the length of Pero's longest path, where the length of the path is the number of intersections along the way (including the first and last intersection).

Input: The first line of the standard input contains the dimensions of the matrix m and n (1 < m, n ≤ 100), two natural numbers separated by a single space. Then, the elements of the matrix are provided on the standard input (in m lines with n numbers separated by single spaces). In the last line of the standard input, there are 4 natural numbers vs, ks, vc, kc (0 ≤ vs, vc < m, 0 ≤ ks, kc < n).

Output: Display a natural number on the standard output representing the length of the longest downhill path from position (vs, ks) to the given position (vc, kc). If there is no downhill path, display the message "ne postoji" (does not exist).

Example
Input
4 5
12 10 11 9 5
10 8 5 3 6
4 7 4 2 10
2 6 7 8 5
1 0 3 0
Output
5
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
        return count + 1;
    
    int mx = INT_MIN;
    int temp = a[x][y];
    a[x][y] = -1;
    forn(i, 4)
    {
        int xx = x + dx[i];
        int yy = y + dy[i];
        if (isValid(xx, yy) && a[xx][yy] != -1 && a[xx][yy] < temp)
            mx = max(mx, dfs(a, xx, yy, count + 1));
    }
    a[x][y] = temp;
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
    int sol = dfs(a, x, y, 0);
    if (sol == INT_MIN)
        cout << "ne postoji";
    else
        cout << sol;
}
