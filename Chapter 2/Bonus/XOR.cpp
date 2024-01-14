/*
XOR

Time Memory Input Output
0.25 s 64 Mb standard output standard input

Given an array of distinct unsigned integers of length n and an unsigned integer t, determine how many pairs of numbers in the array have an exclusive disjunction (XOR) equal to the number t. Write a program that implements an algorithm to determine the requested number of pairs. The algorithm's time complexity should be O(n log n), and the spatial complexity should be O(n).

To calculate the exclusive disjunction in C++, use the bitwise XOR operator (^).

Input:
From standard input, read the length of the array n (n ≤ 10^5). Then, read n unsigned integers, each less than 2^30, representing the elements of the array. Finally, read the number t (0 < t < 2^30).

Output:
Print on standard output a single number representing the requested number of pairs.

Example:

Input
5
1 4 5 2 6
3
Output
2

Explanation
There are 2 pairs satisfying the condition: 1 XOR 2 = 3 and 5 XOR 6 = 3.
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
    int n; cin >> n;
    vector <ll> a(n);
    for (ll &x : a)
    	cin >> x;
    ll t; cin >> t;

    unordered_map<ll, ll> count;
    ll cnt = 0;
    forn(i, n) {
        if (count.find(a[i] ^ t) != count.end())
            cnt += count[a[i] ^ t];
        count[a[i]]++;
    }

    cout << cnt << endl;

    return 0;
}
