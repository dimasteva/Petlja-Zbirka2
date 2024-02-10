/*
Task: Morse Sequence
The sequence 1, 0, 0, 1, 0, 1, 1, 0, 0, 1, 1, 0, 1, 0, 0, 1, ... consisting of zeros and ones is built in the following way: the first element is 1; the second is obtained by the logical negation of the first (NOT(1) = 0); the third and fourth are obtained by the logical negation of the previous two (NOT(1) = 0, NOT(0) = 1); the fifth, sixth, seventh, and eighth are obtained by the logical negation of the first four – resulting in 0, 1, 1, 0, and so on. Thus, starting from a one-element segment 1, for each initial segment of length 2^k (where k takes values 0, 1, 2, ...) a segment of the same length is appended, obtained by the logical negation of all elements of the initial segment.

For a given n, determine the n-th member of the sequence (counting starts from 1).

Input: The first line of standard input contains a natural number n (1 ≤ n ≤ 10^9).

Output: Print on standard output the digit (0 or 1) at position n.

Example 1:
Input
15

Output
0

Example 2:
Input
1234

Output
0

Example 3:
Input
12345678

Output
1
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
    cout << !(__builtin_popcount(n - 1) & 1) << endl;
}
