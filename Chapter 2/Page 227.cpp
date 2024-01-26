/*
Task: Trapezoidal Sums
Based on the square matrix Anxn, create a matrix Bnxn such that bi, j is equal to the sum of those ap, q for which p ≤ i, and p + q ≤ i + j.

Input: Read a number n (3 ≤ n ≤ 750) from the standard input, followed by a square matrix of size nxn containing numbers between 0 and 9.

Output: Print the matrix of sums of trapezoidal regions to standard output.

Example
Input
4
1 0 5 1
3 1 2 1
4 1 0 2
0 1 3 4
Output
1 1 6 7
4 10 13 14
14 18 19 21
18 20 25 29
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
    int n; cin >> n;
    vector <vector <int>> a(n, vector<int>(n));
    forn(i, n)
        forn(j, n)
            cin >> a[i][j];
    forn1(i, n)
        a[0][i] += a[0][i - 1];
    
    for (int i = 1; i < n; i++)
    {
        ll currentsum = 0;
        forn(j, n)
        {
            currentsum += a[i][j];
            a[i][j] = currentsum;
            int next = (j + 1 == n)? j : j + 1;
            a[i][j] += a[i - 1][next];
        }
    }

    for(int i = 0; i < n; i++)
    {
        forn(j, n)
            cout << a[i][j] << " ";
        cout << endl;
    }
}
