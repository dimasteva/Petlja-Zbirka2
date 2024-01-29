/*
Task: Circular Route
On a circular route, there are n gas stations. For each station, the number of liters of gasoline that can be bought and the distance to the next station are known. We assume that the car's fuel tank capacity is unlimited and that 1 liter of gasoline is required for 1 unit of distance. Write a program to determine the ordinal number of the first station from where it is possible to travel the entire circle (if possible). At the beginning of the journey, the car's tank is empty and is filled at the initial station.

Input: The first line of the standard input contains the number of stations n (2 ≤ n ≤ 105). In the next n lines, the distance to the next station and the amount of fuel that can be bought for each station are given (integer numbers between 1 and 1000, separated by a space).

Output: Display in a single line on the standard output the ordinal number of the first station from which the circle can be completed (stations are numbered from 0), or -1 if a circular route is not possible.

Example:
Input
5
3 4
3 2
3 2
4 7
3 2
Output
3
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
    vector <int> v(n);
    forn(i, n)
    {
        int a, b; cin >> a >> b;
        v[i] = b - a;
    }
    int sum = 0;
    forn(i, n)
    {   
        sum += v[i];
    }
    if (sum < 0)
    {
        cout << -1;
        return 0;
    }
    sum = 0;
    int start = 0;
    forn(i, n)
    {   
        sum += v[i];
        if (sum < 0)
        {
            start = i + 1;
            sum = 0;
        }
    }
    cout << start;
    return 0;
}
