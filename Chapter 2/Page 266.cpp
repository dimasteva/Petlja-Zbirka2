/*
Task: Sorted Squares of Numbers
Write a program that determines the sorted array of squares of a sorted array of numbers.
Input: The program reads the length of the array, n (1 ≤ n ≤ 105), from the standard input. Then it reads a sorted array of integers between (−109 and 109), separated by spaces.
Output: Print the sorted array of squares of the input numbers to the standard output (numbers separated by spaces).
Example 1
Input
4
1 3 5 8
Output
1 9 25 64
Example 2
Input
6
-3 -1 0 1 2 5
Output
0 1 1 4 9 25
Example 3
Input
3
-5 -3 -1
Output
1 9 25
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define forn(i, n) for (int i = 0; i < int(n); i++)
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
    vector <ll> a(n);
    for (ll &x : a)
        {cin >> x; x *= x;}
    sort(all(a));
    for (ll x : a)
        cout << x << " ";
}
