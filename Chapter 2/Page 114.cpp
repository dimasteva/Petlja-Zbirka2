/*
Task: Maximum Interval Intersection

People have been coming and going from the pool, and for each visitor, the arrival time and departure time are known. Let's assume that a person is at the pool during the period of [a, b), meaning that the person is at the pool at the moment of arrival a and leaves at the moment of departure b (not inclusive). What is the maximum number of people that were simultaneously at the pool?

Input: The standard input reads the number of visitors n (1 ≤ n ≤ 50000), followed by the arrival and departure times of each visitor in the next n lines (measurements are very precise, so time is represented by natural numbers less than a billion), separated by a single space.

Output: Print on the standard output the maximum number of visitors at the pool at any given moment.

Example:
Input
8
3 7
7 8
2 5
6 8
4 6
1 6
4 5
1 2
Output
5

At moment 4, there are 5 visitors at the pool.
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
    vector <pair<int, int>> a(2 * n);

    forn(i, n)
    {
        int c, l;
        cin >> c >> l;
        a[2*i] = make_pair(c, 1);
        a[2*i+1] = make_pair(l, -1);
    }

    sort(all(a));
    int mx = 0;
    int cnt = 0;
    forn(i, 2*n)
    {
        cnt += a[i].second;
        if (cnt > mx)
            mx = cnt;
    }

    cout << mx << endl;
}
