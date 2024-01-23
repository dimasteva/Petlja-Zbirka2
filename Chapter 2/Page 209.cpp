/*
Task: Central Office
Given is a matrix with data on how many cables need to be introduced into the blocks of buildings in a city (each block is represented by one element of the matrix). Cables can only be laid parallel to the streets, so the distance between two blocks is calculated as |x1 - x2| + |y1 - y2|, where (x1, y1) and (x2, y2) are the coordinates of the blocks. Find the block that is most suitable for the central office, i.e., the block for which the sum of distances to other blocks, multiplied by the number of required cables, is minimal.

Input: The first line of the standard input contains two numbers V and K separated by a single space, the number of rows and columns in the matrix (1 ≤ V ≤ 10, 1 ≤ K ≤ 10). The next V lines each contain K natural numbers, not greater than 1000. Each of these numbers represents the number of cables that need to be brought to the corresponding block of buildings.

Output: Print in the first line the row index and in the second line the column index (starting from 0) of the block for which the mentioned weighted sum of distances to other blocks is minimal.

In case the answer is not unique, preference is given to the block with a smaller first coordinate, and among blocks with the same first coordinate, preference is given to the block with a smaller second coordinate.

Example:
Input
3 4
2 1 1 4
1 3 2 1
2 2 2 1
Output
1
1
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

ll Center(vector<int> a) {
    long long cableLength = 0;
    int n = (int)a.size();
    for (int i = 0; i < n; i++)
        cableLength += a[i] * i;

    long long buildingsBefore = 0;
    long long buildingsAfter = 0;

    for (int i = 0; i < n; i++)
        buildingsAfter += a[i];

    long long minCableLength = cableLength;
    int bestK = 0;

    for (int k = 1; k < n; k++) {
        buildingsBefore += a[k - 1];
        buildingsAfter -= a[k - 1];
        cableLength += buildingsBefore - buildingsAfter;

        if (cableLength < minCableLength) {
            minCableLength = cableLength;
            bestK = k;
        }
    }

    return bestK;
}

int main() {
    FIO;
    int rows, cols;
    cin >> rows >> cols;
    vector<int> rowSum(rows);
    vector<int> colSum(cols);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int x;
            cin >> x;
            rowSum[i] += x;
            colSum[j] += x;
        }
    }

    cout << Center(rowSum) << endl;
    cout << Center(colSum) << endl;
}
