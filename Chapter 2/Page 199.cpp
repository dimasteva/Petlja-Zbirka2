/*
Task: River View
In a street that leads to the river, there are various houses and buildings. An investor chooses a location to build a high-rise building, such that from its top floor, the river is visible. Therefore, it must be taller or at least as tall as all existing buildings from the selected location to the end of the street. Write a program that, for each location on the street, determines the minimum height of the new high-rise building.

Input: The first line of the standard input contains a natural number n (n ≤ 50000). In the next n lines, there are heights of all buildings and houses from the beginning to the end of the street.

Output: Print n numbers to the standard output, each on a separate line, indicating the required heights.

Example:
Input
5
13
23
11
17
13
Output
23
23
17
17
13
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
    vector <int> sol(n);
    int j = n - 1;
    int mx = INT_MIN;
    vector <int> a(n);
    for (int &x : a)
        cin >> x;
    forn(i, n)
    {
        mx = max(mx, a[n - i - 1]);
        sol[j--] = mx;
    }
    for (int x : sol)
        cout << x << endl;
}
