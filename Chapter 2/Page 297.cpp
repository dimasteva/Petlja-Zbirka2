/*
Task: Doubly Sorted Search

Given is a matrix where all rows and columns are sorted in ascending order. Write a program that efficiently finds elements in such a matrix.

Input: The dimensions of the matrix m and n (1 ≤ m, n ≤ 1000) are entered from the standard input, followed by the elements of the matrix (elements of each row on a separate line, separated by spaces). The elements are integers between −10^5 and 10^5. After that, for each row until the end of the input, one number is entered, representing the element to be searched for in the matrix.

Output: For each number searched in the matrix, print on the standard output how many times it appears in the matrix.

Example:
Input
4 5
1 3 5 8 10
4 7 9 11 15
5 9 13 14 20
8 11 14 16 22
11
12
13

Output
2
0
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
#define FIO               \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);

#define INF 1e9
#define MAXN 1005

int search(vector<vector<int>>& matrix, int target) {
    int m = matrix.size();
    int n = matrix[0].size();
    int counter = 0;
    int i = m - 1, j = 0;

    while (i >= 0 && j < n) {
        if (matrix[i][j] == target) {
            counter++;
            i--;
            j++;
        } else if (matrix[i][j] < target) {
            j++;
        } else {
            i--;
        }
    }

    return counter;
}

int main() {
    FIO

    int m, n;
    cin >> m >> n;
    vector<vector<int>> matrix(m, vector<int>(n));
    forn(i, m) {
        forn(j, n) {
            cin >> matrix[i][j];
        }
    }
    int target;
    while (cin >> target) {
        cout << search(matrix, target) << endl;
    }
    return 0;
}

