/*
Task: Number of Sorted Triples
Write a program that determines in the given array a of integers how many triples i < j < k exist such that ai < aj < ak.
Input: The first line of the standard input contains the number of elements in the array n (1 ≤ n ≤ 50000), and the next n lines contain the elements of the array a (integers between 0 and 50000).
Output: Display the requested number of triples in a single line on the standard output - if that number is greater than 109, display its last 9 digits (without leading zeros).
Example 1
Input
5
4
1
5
3
8
Output
3
Explanation
The triples are 4, 5, 8, then 1, 5, 8, and finally 1, 3, 8.
Example 2
Input
5
1
2
3
4
5
Output
10
Example 3
Input
5
5
4
3
2
1
Output
0
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

void msort(vector<pair<int, int>>& a, int l, int r, vector<pair<int, int>>& aTmp, map<int, pair<int,int>>& m) {
    if (l >= r)
        return;
    
    int mid = l + (r - l) / 2;
    msort(a, l, mid, aTmp, m);
    msort(a, mid + 1, r, aTmp, m);

    int i = l, i0 = l, j = mid + 1, j0 = mid + 1, k = l;

    while (i <= mid || j <= r) {
        if (i <= mid && (j > r || a[i].first <= a[j].first)) {
            while (j0 <= r && a[j0].first <= a[i].first)
                j0++;
            m[a[i].second].second += (r - j0 + 1);
            aTmp[k++] = a[i++];
        } else {
            while (i0 < i && a[i0].first < a[j].first)
                i0++;
            m[a[j].second].first += (i0 - l);
            aTmp[k++] = a[j++];
        }
    }

    for (int p = l; p <= r; p++) {
        a[p] = aTmp[p];
    }
}


int main()
{
    int n; cin >> n;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i;
    }
    vector<pair<int, int>> b = a;
    map<int, pair<int, int>> m;
    msort(a, 0, n - 1, b, m);

    ll cnt = 0;
    for (auto itr : m)
    {
        cnt += itr.second.first * itr.second.second;
    }
    cout << cnt % 1000000000 << endl;
}
