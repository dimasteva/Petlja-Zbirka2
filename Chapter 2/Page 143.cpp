/*
Task: Circular Zones
The quality of the signal depends on the distance of a point from the transmitter. The space is divided into zones in the form of circular rings, where the widths of the rings can be different from each other (as shown in the diagram). Write a program that determines the zone to which a given point belongs.

Input: The standard input is used to enter the number n (1 ≤ n ≤ 50000), followed by n real numbers rounded to two decimal places, each on a separate line, representing the widths of all circular rings (for the initial ring, this number represents the radius). After that, enter the number m (1 ≤ m ≤ 50000) and then m pairs of coordinates (each line containing two real numbers rounded to two decimal places, separated by a single space).

Output: Print m lines on the standard output. In each line, print either the index of the zone (starting from zero) to which the point belongs, or the text "izvan" if the point is outside the last zone. If the point is on the boundary of two zones, consider it to belong to the inner zone.

Example:
Input
3
2.0
3.0
7.0
5
1.0 1.0
2.0 3.0
8.0 7.0
13.2 14.5
0.0 12.0
Output
0
1
2
izvan
2
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

int main()
{ 
    int n; cin >> n;
    vector <float> a(n);
    float sum = 0;
    forn(i, n)
    {
        float c; cin >> c;
        sum += c;
        a[i] = sum;
    }
    int m; cin >> m;
    while(m--)
    {
        float x, y;
        cin >> x >> y;
        float mx = max(x, y);
        int dis = distance(a.begin(), lower_bound(all(a), mx));
        cout << (dis == n? "izvan" : to_string(dis)) << endl;
    }
}
