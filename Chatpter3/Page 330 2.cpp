/*
Task: Gray Code
Gray code of length n involves arranging all n-digit binary numbers such that each two consecutive numbers differ in exactly one bit (this also applies to the first and last numbers, considering that all numbers are arranged in a circle).

The Gray code of length 0 contains only one element, an empty string. The Gray code of length n+1 can be obtained from the code of length n by adding the digit 0 in front of each number, then reversing the order of elements in the code of length n, and adding the digit 1 to the front of each number. The two obtained arrays of numbers are then merged.

Write a program that, for a given length of the code n and a given position k (0 ≤ k < 2^n), determines the binary number that is at position k in the code of length n.

Input: Read the length of the code n (1 ≤ n ≤ 32) and the position k (0 ≤ k < 2^n) from standard input.

Output: Print on standard output the required binary number.

Example 1:
Input
3
2

Output
011

Example 2:
Input
30
999999999

Output
100110010101111010110100000000
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
    int n;
    ll k;
    cin >> n >> k;
    k ^= k >> 1;
    bitset<32> b(k);
    string s = b.to_string();
    cout << s.substr(32-n) << endl;
    return 0;
}
