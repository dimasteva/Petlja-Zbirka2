/*
Task: Fair Chocolate Distribution

Given are n packages of chocolate, and for each of them, it is known how many chocolates it contains. Each of the k students takes exactly one package, with the goal that all students have as close a number of chocolates as possible. What is the smallest possible difference between the student who takes the package with the least chocolates and the one who takes the package with the most chocolates?

Input: From the standard input, enter a natural number n (1 ≤ n ≤ 50000), and then n natural numbers (between 1 and 106, separated by a single space) representing the number of chocolates in each package. In the last line, enter the number of children k (1 ≤ k ≤ n).

Output: Print to the standard output the value of the smallest difference.

Example:

Input:

8
3 8 1 17 4 7 12 9
4

Output:
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
    int n; cin >> n;
    vector <int> a(n);
    for (int &x : a)
        cin >> x;
    sort(all(a));
    int k; cin >> k;
    int mn = INT_MAX;
    for (int i = 0; i + k - 1 < n; i++)
    {
        mn = min(mn, a[i + k - 1] - a[i]);
    }
    cout << mn << endl;
}
