/*
Task: Cylindrical Matrix
The elements of an integer matrix A_{m \times n} are wrapped into a cylinder so that the top and bottom (first and last) rows of the matrix touch. If a robot moves from the left end of the cylinder (from the first column) to the right (to the last column), with allowed movements of one cell up-right, right, or down-right, determine the path that the robot can take to achieve the minimum sum of values along that path.

Input:
The first line of standard input contains the number of rows of the table m (1 ≤ m ≤ 30), the second line contains the number of columns of the table n (1 ≤ n ≤ 30), followed by m rows of n values ranging from 0 to 100.

Output:
On the first line of standard output, display the required minimum sum, followed by m rows with the indices of the rows and columns (separated by a space) of the cells the robot passes through. If there are multiple paths with the minimum sum, print any of them.

Example

Input:
5
6
4 3 5 7 5 8
1 9 4 1 3 9
2 3 9 1 2 5
1 7 8 2 0 1
4 6 1 9 1 7

Output:
8
1 0
0 1
4 2
3 3
3 4
3 5

Explanation
The robot moves through the following cells (the move from cell (0, 1) to cell (4, 2) is possible due to the cylindrical shape of the matrix):
. 3 . . . .
1 .
. . . . . .
. . . 2 0 1
. . 1 . . .
In this example, the robot starts at cell (1, 0) with a value of 1, then moves to (0, 1) with a value of 3, and continues on to (4, 2) with a value of 1, followed by (3, 3) with a value of 2, (3, 4) with a value of 0, and finally (3, 5) with a value of 1.
The total sum of the values along this path is 8, which is the minimum sum obtainable for this matrix configuration.
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define forn(i, n) for (int i = 0; i < int(n); i++)
#define forn1(i, n) for (int i = 1; i < int(n); i++)
#define all(c) (c).begin(), (c).end()
#define pb push_back
#define MOD 1000000007
#define FIO                \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);

int main()
{
    FIO;
    int m, n;
    cin >> m >> n;
    
    vector<vector<int>> dp(m, vector<int>(n));
    vector<vector<string>> path(m, vector<string>(n, ""));
    
    forn(i, m)
        forn(j, n)
            cin >> dp[i][j];
    
    forn(i, m)
	{
        dp[i][0] = dp[i][0];
        path[i][0] = to_string(i) + " 0\n";
    }
    
    for (int j = 1; j < n; j++)
	{
        forn(i, m)
		{
            int up = (i - 1 + m) % m;
            int down = (i + 1) % m;
            int left = i;
            
            int min_val = dp[up][j - 1];
            string min_path = path[up][j - 1];
            
            if (dp[left][j - 1] < min_val)
			{
                min_val = dp[left][j - 1];
                min_path = path[left][j - 1];
            }
            
            if (dp[down][j - 1] < min_val)
			{
                min_val = dp[down][j - 1];
                min_path = path[down][j - 1];
            }
            
            dp[i][j] += min_val;
            path[i][j] = min_path + to_string(i) + " " + to_string(j) + "\n";
        }
    }
    
    int min_sum = dp[0][n - 1];
    string min_path = path[0][n - 1];
    
    for (int i = 1; i < m; i++)
	{
        if (dp[i][n - 1] < min_sum)
		{
            min_sum = dp[i][n - 1];
            min_path = path[i][n - 1];
        }
    }
    
    cout << min_sum << endl;
    cout << min_path;
    
    return 0;
}
