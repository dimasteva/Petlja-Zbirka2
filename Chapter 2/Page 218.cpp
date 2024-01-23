/*
Task: Hirsch h-Index
Scientists are ranked using a statistic called the Hirsch index (abbreviated as h-index). The h-index of a scientist is the largest number h such that the scientist has at least h papers with at least h citations each.

Input: The standard input provides the number n (1 ≤ n ≤ 5 · 10^4), representing the number of scientist's papers, followed by n natural numbers representing the number of citations (between 0 and 10^6) for each of these n papers.

Output: Print on the standard output a single natural number representing the scientist's h-index.

Example
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

int main() {

    int n;
    cin >> n;

    vector<int> articles_count(n + 1, 0);

    for (int i = 0; i < n; i++) {
      
        int citations;
        cin >> citations;

        articles_count[citations < n ? citations : n]++;
    }

    int h_index = n;
    
    int total_articles = articles_count[n];

    while (total_articles < h_index) {
        h_index--;

        total_articles += articles_count[h_index];
    }
    cout << h_index << endl;

    return 0;
}
