/*
Task: Equality of Distances

The residents of a long street want to determine the location where a mobile phone antenna will be placed. Since they want to determine the location in the fairest possible way, they have agreed to build the antenna at a location where the sum of the distances of all those on the left of the antenna to it will be equal to the sum of the distances of all those on the right of the antenna to it. If the coordinates of all the houses on the street are known (we can imagine these as coordinates of points on a line), write a program that determines the position of the antenna.

Input: The first line of the standard input contains a natural number n (1 ≤ n ≤ 100), representing the number of residents. The next n lines contain real numbers (from −1000 to 1000) representing the coordinates of the residents (x coordinates of points on the axis).

Output: Print on the standard output a real number representing the desired antenna position (a tolerance error of 10^-5 is allowed).

Example:
Input
5
-7.34
15.6
3.67
-22.17
6.2

Output
-0.80800
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

void avg(vector <double> a, int n, int start, double sum)
{
    if (start < n)
    {
        sum += a[start];
        avg(a, n, start + 1, sum);
    } else
        cout << setprecision(5) << fixed << sum / n;
}

int main()
{
    int n; cin >> n;
    vector <double> a(n);
    for (double &x : a)
        cin >> x;
    avg(a, n, 0, 0);
}
