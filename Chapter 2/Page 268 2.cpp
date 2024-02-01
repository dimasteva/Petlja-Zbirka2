/*
Task: Twins
Maria and Peter are twins, and we want to buy each of them a suit as a birthday present, but in a way that the prices of these two gifts differ as little as possible (it doesn't matter whose gift will be more expensive). Write a program that reads the prices of all men's suits and women's suits and determines and prints the smallest difference between the prices of a women's suit and a men's suit.

Input: The input consists of:
- The number of men's suits, m (1 ≤ m ≤ 50000), on the first line.
- The prices of m men's suits on the second line, m integers between 1 and 2 · 10^9 separated by a single space.
- The number of women's suits, z (1 ≤ z ≤ 50000), on the third line.
- The prices of z women's suits on the fourth line, z integers between 1 and 2 · 10^9 separated by a single space.

Output: Print the smallest value of the difference between the prices of a men's suit and a women's suit on the standard output.

Example:
Input
5
4680 2120 7940 11530 17820
4
850 13420 5770 6300
Output
1090
Explanation: The smallest difference is achieved when suits with prices 4680 and 5770 dinars are bought.
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
    int m; cin >> m;
    vector <int> b(m);
    for (int &x : b)
        cin >> x;
    sort(all(b));
    int mn = INT_MAX;
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        mn = min(mn, abs(a[i] - b[j]));
        if (a[i] < b[j])
            i++;
        else
            j++;
    }
    cout << mn;
}
