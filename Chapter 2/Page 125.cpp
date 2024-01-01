/*
Task: Squares

Given a set of points in the plane, write a program that determines how many different squares can be formed with all four vertices belonging to this set of points.

Input: The standard input first reads an integer n (1 ≤ n ≤ 1000), followed by the coordinates of n points in the next n lines (first x, then y, separated by a single space).

Output: Print on the standard output the requested number of squares.

Example:
Input
7
-1 1
0 1
1 1
-1 0
0 0
1 0
0 -1
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
#define FIO                \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);

typedef pair<int, int> Point;

Point translate(const Point& p, int dx, int dy) {
    return make_pair(p.first + dx, p.second + dy);
}

void getOtherTwoVerticesOfSquare(const Point& p1, const Point& p2,
                                 Point& p3_1, Point& p4_1,
                                 Point& p3_2, Point& p4_2) {
    int dx = p2.first - p1.first, dy = p2.second - p1.second;
    p3_1 = translate(p1, -dy, dx);
    p4_1 = translate(p2, -dy, dx);
    p3_2 = translate(p1, dy, -dx);
    p4_2 = translate(p2, dy, -dx);
}

int main() {
    int n;
    cin >> n;
    
    vector<Point> points(n);
    for (int i = 0; i < n; i++)
        cin >> points[i].first >> points[i].second;
    
    sort(points.begin(), points.end());
    
    int squareCount = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            Point p3_1, p4_1, p3_2, p4_2;
            getOtherTwoVerticesOfSquare(points[i], points[j], p3_1, p4_1, p3_2, p4_2);
            
            if (binary_search(points.begin(), points.end(), p3_1) &&
                binary_search(points.begin(), points.end(), p4_1))
                squareCount++;
            
            if (binary_search(points.begin(), points.end(), p3_2) &&
                binary_search(points.begin(), points.end(), p4_2))
                squareCount++;
        }
    }
    
    cout << squareCount / 4 << endl;
}
