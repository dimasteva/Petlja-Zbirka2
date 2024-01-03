/*
Task: First Greater and Last Smaller

A web page contains several rectangular objects (images, paragraphs, tables, etc.). For each object, the position of its top and bottom edges in relation to the top of the page is known. When displaying the page and scrolling, many objects may not be visible. The system works by displaying all objects whose top edge is within the visible part of the page (as shown in the picture). Write a program that determines the objects whose top edge is visible during the display of certain parts of the page.

Input: The standard input reads the number n (1 ≤ n ≤ 50000), followed by n lines containing pairs of natural numbers less than 106 separated by a single space, representing the position (distance from the top of the page) of the top and bottom edges of n objects on the page. Objects are arranged in non-decreasing order of the position of their top edge.

After that, the input reads the number m (1 ≤ m ≤ 50000), followed by m pairs of natural numbers separated by a single space (at most 50000), representing the position (distance from the top of the page) of the top and bottom borders of the visible part of the page.

Output: For each pair of numbers determining the visible part of the page, print one line on the standard output containing two integers separated by a space. The first number represents the position (index within the array, counted from zero) of the first object whose top edge is strictly greater than the position of the top border of the visible part, and the second number represents the position of the last object whose top edge is strictly smaller than the position of the bottom border of the visible part. If the top edges of all objects in the array are above the top border of the visible part, the first number should be equal to n. If the top edges of all objects in the array are below the bottom border, the second number should be -1.

Example:

Input:
11
3 5
4 7
5 7
8 13
8 16
9 11
11 17
11 12
11 20
13 20
14 18
6
5 12
6 13
8 14
0 20
20 25
1 2

Output:
3 8
3 8
5 9
0 10
11 10
0 -1


Explanation:
In the first query, the visible part of the page is from 5 to 12, the first visible object is (8, 13) at position 3 in the array, and the last visible object is (11, 20) at position 8. The same logic applies to the next three queries.

In the query (20, 25), all tops start above height 20, so there is no object starting above height 20 (hence the value 11 is printed), while the object (14, 18) at position 10 is the last one starting below height 20.

In the query (1, 2), all tops start below height 2, so the object (3, 5) at position 0 is the first one starting below height 2, and there is no object starting above height 2 (hence the value -1 is printed).
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

int main() { 
    int n; cin >> n;
    vector <int> a(n);

    int c; // bottom edges are useless
    forn(i, n)
        cin >> a[i] >> c;
    
    int m; cin >> m;
    while(m--)
    {
        int x, y;
        cin >> x >> y;

        x = distance(a.begin(), upper_bound(all(a), x));
        y = distance(a.begin(), lower_bound(all(a), y)) - 1;

        cout << x << " " << y << endl;
    }
}
