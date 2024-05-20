/*
Task: Number of elements to the right of a given element greater than or equal to it
Given an array of n integers representing the value of actions of a company during a certain time period. Day d (counted from 0 to n-1) is considered k-successful if after it, no more than k days occurred where the value of the action was strictly greater than or equal to the value during day d. Write a program that determines whether day d was k-successful for various values of d and k.

Input: The standard input reads the number of days n (1 ≤ n ≤ 50000), followed by n distinct integers between 1 and 106 representing the values of the company's actions. After that, the number of queries q (1 ≤ q ≤ 50000) is read, followed by q lines each containing two numbers d (0 ≤ d < n) and k (0 ≤ k ≤ n), separated by a space.

Output: For each of the q queries, print "da" or "ne" on the standard output depending on whether day d was k-successful.

Example
Input
7
30 14 20 15 8 23 25
1
1 2
Output
ne
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

void msort(vector<pair<int, int>>& a, int l, int r, vector<pair<int, int>>& b, map<int, int>& m)
{
    if (l >= r)
        return;
    int mid = l + (r - l) / 2;
    msort(a, l, mid, b, m);
    msort(a, mid + 1, r, b, m);
    int pl = l, pr = mid + 1, inc = 0;
    while(pl <= mid && pr <= r)
    {
        if (a[pl].first <= a[pr].first)
        {
            m[a[pl].second] += r - pr + 1;
            b[inc++] = a[pl++];
        } else
        {
            b[inc++] = a[pr++];
        }
    }
    while(pl <= mid)
        b[inc++] = a[pl++];
    while(pr <= r)
        b[inc++] = a[pr++];
    
    copy(begin(b), next(begin(b), r - l + 1), next(begin(a), l));
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
    map<int, int> m;
    msort(a, 0, n - 1, b, m);
    int q; cin >> q;
    while(q--)
    {
        int d, k; cin >> d >> k;
        if (m[d] > k)
            cout << "ne" << endl;
        else
            cout << "da" << endl;
    }
}
