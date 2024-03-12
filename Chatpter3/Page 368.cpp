/*
Task: All Variations

Write a program that determines all variations with repetition of length k from the set {1, ..., n}.

Input: The standard input contains a number n (1 ≤ n ≤ 5) on the first line, and the next line contains a number k (1 ≤ k ≤ 5).

Output: Print to the standard output all variations, sorted lexicographically.

Example:
Input
2
3
Output
1 1 1
1 1 2
1 2 1
1 2 2
2 1 1
2 1 2
2 2 1
2 2 2
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
    int n, k; cin >> k >> n;
    vector <int> a(n, 1);
    while(a[0] <= k)
    {
        forn(i, n)
            cout << a[i] << " ";
        cout << endl;
        a[n - 1]++;
        int i = n - 1;
        while(i > 0 && a[i] > k)
        {
            a[i] = 1;
            a[i - 1]++;
            i--;
        }
    }
}
