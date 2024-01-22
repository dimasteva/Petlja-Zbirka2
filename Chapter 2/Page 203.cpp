/*
Task: Good Competitors
Competitors participated in a tournament in programming and mathematics. A competitor is considered good if there is no other competitor who scored strictly more points than him in both programming and mathematics. Determine the number of good competitors.

Input: The standard input contains the number of competitors, n (2 ≤ n ≤ 50000). The next n lines each contain two numbers (between 0 and 50000), separated by a space, representing the points of the competitors in programming and mathematics.

Output: Print to the standard output the number of good competitors.

Example:
Input
9
2 4
9 3
7 6
3 7
7 2
3 9
4 9
6 4
6 8
Output
5
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
    FIO;
    int n; cin >> n;
    vector <pair<int, int>> a(n);
    forn(i, n)
        cin >> a[i].first >> a[i].second;
    
    sort(all(a),
            [](auto& p1, auto& p2) {
            return p1.first > p2.first ||
            (p1.first == p2.first && p1.second < p2.second);
                });


    int cnt = 0;
    int mx = INT_MIN;
    
    forn(i, n)
    {
        if (a[i].second >= mx)
        {
            cnt++;
            mx = a[i].second;
        }
    }
    
    cout << cnt;
}
