/*
Task: Number of Different Line Lengths
Given are N pairs of points representing the ends of lines in space. Output how many different line lengths appear in the given set of lines.

Input: The first line of input contains a natural number N (N ≤ 50000), representing the number of lines. The next N lines describe these lines with 6 integers (-109 ≤ X1, Y1, Z1, X2, Y2, Z2 ≤ 109) separated by spaces, representing the endpoints of each line.

Output: Output in a single line how many different line lengths appear in the given set of lines.

Example 1:
Input
7
0 0 0 0 0 1
0 0 0 0 1 0
0 0 0 1 0 0
0 0 0 1 0 1
0 0 0 1 1 0
0 0 0 0 1 1
0 0 0 1 1 1

Output
3
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define forn(i, n) for (int i = 0; i < int(n); i++)
#define forn1(i, n) for (int i = 1; i < int(n); i++)
#define all(c) (c).begin(), (c).end()
#define pb push_back
#define MOD 1000000007 // 998244353
#define FIO \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);

int main()
{
    int n;
    cin >> n;
    set<ll> s;

    forn(i, n)
    {
        int x1, y1, z1, x2, y2, z2;
        cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;

        ll dx = x2 - x1;
        ll dy = y2 - y1;
        ll dz = z2 - z1;

        ll distanceSquared = dx * dx + dy * dy + dz * dz;

        s.insert(distanceSquared);
    }

    cout << s.size() << endl;

    return 0;
}
