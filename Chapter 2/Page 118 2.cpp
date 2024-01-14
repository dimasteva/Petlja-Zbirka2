/*
Task: Sum of Triple Minima
Given an array of positive integers a0, a1, ..., an−1. For each triplet 0 ≤ i < j < k ≤ n, determine the minimum value among the three numbers ai, aj, ak, and then find the last 6 digits of the sum of these obtained values.

Input: The first line of standard input contains the number of array elements, n (1 ≤ n ≤ 10000), and the following n lines contain the elements of the array (1 ≤ ai ≤ 100000).

Output: The last 6 digits of the sum.

Example 1
Input
5
3
8
4
2
6

Output
25

Example 2
Input
10
909111
56723
73737
636
91919
10000
23400
6258
10002
67654

Output
409187
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define forn(i, n) for (int i = 0; i < int(n); i++)
#define forn1(i, n) for (int i = 1; i < int(n); i++)
#define all(c) (c).begin(), (c).end()
#define pb push_back
#define MOD 1000000007 // 998244353
#define FIO \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);

int main()
{
    ll n;
    cin >> n;
    vector<int> a(n);

    for (int &x : a)
        cin >> x;

    sort(all(a));

    ll num = (n - 2) * (n - 2 + 1) / 2;
    ll i = 0;
    ll cnt = 0;
    ll sum = 0;

    while (num)
    {
        sum += num * a[i++];
        sum %= 1000000;
        num -= n - 2 - cnt++;
    }

    cout << sum;

    return 0;
}
    cout << sum;
}
