/*
Task: Trees

A lumberjack needs to cut a certain amount of wood and has a chainsaw that can be adjusted to cut at any integer height (in meters). Since the chainsaw only cuts the wood above the set height, the higher the chainsaw is set, the less wood will be cut. The lumberjack cares about the environment and does not want to cut more trees than necessary. Write a program that determines the highest possible integer height for the chainsaw so that the lumberjack obtains enough wood (assume there is always enough wood).

Input: The standard input reads the number of trees in the forest, n (1 ≤ n ≤ 105), followed by an array of heights of each tree (an array of natural numbers between 1 and 10000, each on a separate line). After that, the input reads the amount of cut wood (since all tree trunks have the same thickness, the quantity is measured in meters of the cut tree height).

Output: Print on the standard output the maximum integer height of the chainsaw required.

Example:
Input
5
24
21
19
14
22
14
Output
18
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
    FIO;
    int n; cin >> n;
    vector <int> a(n + 1);
    a[0] = 0;
    forn1(i, n + 1)
        cin >> a[i];
    int x; cin >> x;

    sort(all(a), greater<int>());

    int k;
    ll cut = 0;
    for (k = 1; k < n + 1; k++)
    {
        cut += (a[k - 1] - a[k]) * k;
        if (cut >= x)
            break;
    }
    cout << a[k] + (cut - x) / k;
}

