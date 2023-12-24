/*
Task: Sorting Based on Distance from O
Pera has been studying cities he wants to visit. On the map, he drew a coordinate system where his city is located at the coordinate origin, and other cities are determined by their Cartesian coordinates. Write a program that sorts the array of cities in non-increasing order based on the distance from Pera's city (from the nearest to the farthest). If two cities are equally distant from Pera's city, sort them in non-decreasing order first by the x-coordinate and then by the y-coordinate.

Input: The first line of the standard input contains the number of cities, a natural number n (n ≤ 50000). The next n lines contain the elements of the array: in each line, there are x and y coordinates of one city (two integers from the interval [−103, 103] separated by a single space).

Output: The standard output contains the elements of the sorted array of cities - for each city in one line, display its x and y coordinates, separated by a single space.

Example:
Input
4
8 2
1 -1
2 -3
-2 -3
Output
1 -1
-2 -3
2 -3
8 2
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

int CalculateDistance(int x, int y)
{
    return x * x + y * y;
}

bool Compare(const pair<int, pair<int, int>> &a, const pair<int, pair<int, int>> &b) {
    if (a.first == b.first)
        if (a.second.first == b.second.first)
            return a.second.second > b.second.second;
        else
            a.second.first > b.second.first;
    else
        return a.first < b.first;
}

int main() {
    int n;
    cin >> n;
    vector<pair<int, pair<int, int>>> v(n);

    forn(i, n)
    {
        int x, y;
        cin >> x >> y;

        int distance = CalculateDistance(x, y);

        v[i] = make_pair(distance, make_pair(x, y));
    }

    sort(all(v), Compare);

    forn(i, n)
        cout << v[i].second.first << " " << v[i].second.second << endl;
}
