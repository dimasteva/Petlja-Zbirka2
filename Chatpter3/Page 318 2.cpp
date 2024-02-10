/*
Task: Last k Digits of a Power
Write a program that, for given natural numbers a, n, and k, displays the last k digits of the power a^n.

Input: On standard input, there are natural numbers a (a ≤ 10^9), n (n ≤ 10^9), and k (k ≤ 9), each in a separate line.

Output: On standard output, in one line, display the last (rightmost) k digits of the power a^n.

Example 1:
Input
2
13
3

Output
192

Example 2:
Input
10
5
3

Output
000

Example 3:
Input
3452
20
4

Output
0576
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

ll power(ll a, ll n, int k, ll mod) {
    if (n == 0) {
        return 1;
    } else if (n % 2 == 0) {
        ll half = power(a, n / 2, k, mod);
        return (half * half) % mod;
    } else {
        return (a * power(a, n - 1, k, mod)) % mod;
    }
}

int main() {
    ll a, n;
    int k;
    cin >> a >> n >> k;

    ll mod = pow(10, k);
    a %= mod;

    ll result = power(a, n, k, mod);
    printf("%0*lld\n", k, result);

    return 0;
}

