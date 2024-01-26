/*
Task: Minimums of Rectangles
For a given matrix Am×n, determine the matrix obtained by replacing each element ai, j with the minimum element of the submatrix A′
i×j, whose upper-left corner is at position (0, 0), and the lower-right corner is at position (i, j).

Input: Read the numbers m and n (3 ≤ m, n ≤ 500) from the standard input, followed by a rectangular matrix of dimensions m × n containing numbers between 0 and 1000000.

Output: Print the matrix of minimums of rectangular regions to standard output.

Example
Input
3 4
5 1 2 3
4 3 2 0
3 4 1 2
Output
5 1 1 1
4 1 1 0
3 1 1 0
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

int main() {
    FIO;
    int m, n;
    cin >> m >> n;
    vector<vector<int>> mat(m, vector<int>(n));
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
            cin >> mat[i][j];

    vector<vector<int>> min_mat(m, vector<int>(n, 1e9+7));
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            if(i>0) mat[i][j] = min(mat[i][j], mat[i-1][j]);
            if(j>0) mat[i][j] = min(mat[i][j], mat[i][j-1]);
            min_mat[i][j] = mat[i][j];
        }
    }

    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++)
            cout << min_mat[i][j] << " ";
        cout << endl;
    }

    return 0;
}
