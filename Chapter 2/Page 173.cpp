/*
Task: Hirsch h-Index
Scientists are ranked using a statistic called the Hirsch index (abbreviated as h-index). The h-index of a scientist is the highest number h such that the scientist has at least h papers with at least h citations each.

Input: The standard input contains the number n (1 ≤ n ≤ 5 · 104), representing the number of papers of the scientist, followed by n natural numbers representing the number of citations (between 0 and 106) for each of these n papers.

Output: Print a natural number representing the h-index of the scientist.

Example:
Input
8
3 5 12 7 5 9 0 17
Output
5
Explanation
There are exactly 5 papers with at least 5 citations (5, 12, 9, 7, 17). The remaining papers have 3, 5, and 0 citations, so there are no 6 papers with at least 6 citations.
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

bool found(vector<int> a, int n, int mid) {
    int dis = distance(begin(a), lower_bound(all(a), mid));
    return (n - dis >= mid);
}


int main()
{
    FIO;
    int n; cin >> n;
    vector <int> a(n);
    for (int &x : a)
        cin >> x;
    sort(all(a));
    int start = 0, end = n;
    int mx = INT_MIN;
    while(start <= end)
    {
        int mid = start + (end - start) / 2;

        if (found(a, n, mid))
            {start = mid + 1; mx = max(mx, mid);}
        else
            end = mid - 1;
        //cout << mid << " " << mx << endl;
    }
    if (mx != INT_MIN)
        cout << mx;
    else
        cout << "nema";
}
