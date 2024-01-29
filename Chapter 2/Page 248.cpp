/*
Task: Rectangle Sums
A satellite image of a rectangular area determines the soil fertility. The area is divided into a certain number of squares (with dimensions of 10 by 10 meters), and for each square, the fertility is assessed with a number from 0 to 10. Write a program that can efficiently determine the total fertility for each of several given rectangular fields based on such an image.

Input: The standard input starts with an integer n (1 ≤ n ≤ 1000), representing the dimension of the satellite image in a square shape (expressed as the number of squares with known fertility). Following that, in the next n lines, there are n integers between 0 and 10, representing the fertility rating for each individual square of the image. After that, the program reads an integer m (1 ≤ m ≤ 10000), representing the number of fields whose fertility needs to be calculated. In the next m lines, there are four integers separated by a single space, representing the coordinates of the two opposite vertices of each field (expressed as numbers from 0 to n-1). The input starts with the row index, then the column index of the first vertex, followed by the row index, and finally the column index of the second vertex.

Output: Print m natural numbers (each on a separate line) on the standard output, representing the fertility rating of each field. The total fertility rating of a field is the sum of the fertility ratings of all squares within that field.

Example:
Input
5
1 2 3 4 5
5 4 3 2 1
1 2 3 4 5
5 4 3 2 1
1 2 3 4 5
3
0 0 4 4
3 1 1 3
0 3 4 2
Output
75
27
31
*/
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define forn(i, n) for (int i = 0; i < int(n); i++)
#define all(c) (c).begin(), (c).end()
#define pb push_back
#define MOD 1000000007 // 998244353
#define FIO                \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);

int main() {
    FIO;
    int n; cin >> n;
    vector<vector<int>> a(n + 1, vector<int>(n + 1));
    forn(i, n)
    {
        forn(j, n)
        {
            int x; cin >> x;
            a[i + 1][j + 1] = a[i + 1][j] + a[i][j + 1] - a[i][j] + x;
        }
    }
    
    int m; cin >> m;
    while(m--)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        x1++; y1++; x2++; y2++; // because we have 1-indexed prefix sum array
        ll sum = a[x2][y2] - a[x1 - 1][y2] - a[x2][y1 - 1] + a[x1 - 1][y1 - 1];
        cout << sum << endl;
    }
    
    return 0;
}
