/*
Task: Maximum Weighted Sum after Circular Shift
Given an array a of integers of length n, a cyclic shift operation is allowed, i.e., rotating the array to the left by one position. This operation can be repeated any number of times. Write a program to determine the minimum number of left cyclic shifts such that the weighted sum
0 · a0 + 1 · a1 + 2 · a2 + 3 · a3 + . . . + (n − 1) · an−1,
modulo 1234567, in the transformed array has the maximum possible value.

Input: The first line of standard input contains a natural number n (n ≤ 50000). The next n lines contain the elements of the array a (integers in the range [0, 100]).

Output: Display, in one line of standard output, the required number of cyclic shifts to the left (an integer from 0 to n − 1), and in the next line, the maximum value of the weighted sum.

Example
Input
3
5
4
1
Output
2
13
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
    cin.tie(0); \
    cout.tie(0);

int main() {
    FIO;
    int n;
    cin >> n;

    ll sum = 0;
    ll st = 0;
    int k = 0;
    ll mx = INT_MIN;
    
    vector<ll> a(n);
    ll inc = 0;

    forn(i, n) {
        cin >> a[i];
        sum += a[i];
        st += inc++ * a[i];
    }

    forn(i, n) {
        st = ((st - sum + a[i] + (n - 1) * a[i]) % 1234567 + 1234567) % 1234567;

        if (st > mx) {
            k = i + 1;
            mx = st;
        }
    }

    cout << mx << endl;

    return 0;
}
