/*
Task: Covering a straight line with closed intervals
Write a program that, for a sequence of closed intervals [ai, bi], i = 0, 1, · · · , n − 1, determines the length of the portion of the straight line covered and the minimum number of intervals needed to achieve coverage of the same set of points on the line (this set of intervals can be obtained by merging the original intervals, i.e., by uniting the original intervals that intersect).

Input: The first line of standard input contains the number of intervals, n (1 ≤ n ≤ 50000), and the following n lines contain pairs of integers satisfying −106 ≤ Li < Ri ≤ 106, representing the left and right ends of the intervals.

Output: Two numbers: in the first line of standard output, the length of the portion of the straight line covered by the input intervals, and in the next line, the number of intervals formed by merging mutually connected intervals.

Example
Input
3
1 3
5 8
2 4

Output
6
2

Explanation
The intervals [1, 3] and [2, 4] can be merged into the interval [1, 4], while the interval [5, 8] remains unchanged.
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
    vector <pair<int, int>> v(n);

    forn(i, n)
        cin >> v[i].first >> v[i].second;
    
    sort(all(v));

    int a = v[0].first, b = v[0].second;
    int numberOfIntervals = 0, sum = 0;
    forn1(i, n)
    {
        if (b > v[i].first)
            b = v[i].second;
        else
        {
            sum += b - a;
            numberOfIntervals++;
            a = v[i].first;
            b = v[i].second;
        }
    }
    sum += b - a;
    numberOfIntervals++;

    cout << sum << endl << numberOfIntervals << endl;
}
