/*
Task: Fraternal division
Given a set of n items, each item has a known value (a real number). Two brothers need to divide the items so that the total value of the items each brother receives differs minimally. During the division, each brother receives whole items, and after the division, each item belongs to one of the brothers. Write a program to determine the minimum difference in value that the brothers receive during the fraternal division.

Input: The first line of the standard input contains a natural number n (n ≤ 10). The next n lines contain real numbers, each representing the value of an item.

Output: Display in a single line on the standard output the minimum difference in value obtained during the fraternal division, rounded to two decimal places.

Example
Input
4
3.5
1.7
8.0
1.2
Output
1.60
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define forn(i, n)          for (int i = 0; i < int(n); i++)
#define forn1(i, n)          for (int i = 1; i < int(n); i++)
#define pb                  push_back
#define MOD                 1000000007 // 998244353
#define FIO                 ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(c) (c).begin(), (c).end()

double minDiff(vector<double>& a, double x, double y, int i)
{
    if (i == a.size())
        return abs(y - x);
    
    double mn = DBL_MAX;
    mn = min(mn, minDiff(a, x + a[i], y, i + 1));
    mn = min(mn, minDiff(a, x, y + a[i], i + 1));
    return mn;
}

int main()
{
    int n; cin >> n;
    vector<double> a(n);
    for (double &x : a)
        cin >> x;
    
    cout << fixed << setprecision(2) << showpoint << minDiff(a, 0, 0, 0);
}
