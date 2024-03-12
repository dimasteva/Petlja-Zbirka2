/*
Task: Next Variation

Write a program that determines the next variation of length k from the set {1, ..., n} in lexicographical order.

Input: The first line of the standard input contains the number k (1 ≤ k ≤ 100), and the second line contains the number n (1 ≤ n ≤ 100). The third line contains a variation described by numbers separated by a single space.

Output: Print to the standard output the next variation in lexicographical order, if it exists, or -, if the input variation is lexicographically maximal.

Example:
Input
5
4
1 1 2 3 4
Output
1 1 2 4 1
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
    int n; cin >> n;
    int k; cin >> k;
    vector <int> a(n);
    for (int &x : a)
        cin >> x;
    a[n - 1]++;
    for (int i = n - 1; i > 0; i--)
    {
        if (a[i] > k)
        {
            a[i] = 1;
            a[i - 1]++;
        } else
            break;
    }
    if (a[0] > k)
        {cout << "-"; return 0;}
    forn(i, n)
        cout << a[i] << " ";
}
