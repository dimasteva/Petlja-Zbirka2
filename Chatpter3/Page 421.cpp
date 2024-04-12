/*
Task: Complete Gray code

A Gray code of order n implies arranging all n-digit binary numbers such that each two neighboring numbers differ in exactly one bit (this applies to the first and last numbers as well, so it can be considered that all numbers are arranged in a circle).
A Gray code of length 0 contains only one element, which is an empty string. A Gray code of length n+1 can be obtained from the code of length n by adding a digit 0 in front of each number in the code of length n, then reversing the order of elements in the code of length n, adding a digit 1 at the beginning of each number, and then joining these two sequences of numbers.
For example, the Gray code of order 2 is:
00
01
11
10

Write a program that, given the length of the code n, prints the complete Gray code of length n.

Input: The length of the code n is read from the standard input (1 ≤ n ≤ 14).
Output: Print the requested code to the standard output.
Example 1:
Input
3
Output
000
001
011
010
110
111
101
100
Example 2:
Input
4
Output
0000
0001
0011
0010
0110
0111
0101
0100
1100
1101
1111
1110
1010
1011
1001
1000
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define forn(i, n)          for (int i = 0; i < int(n); i++)
#define forn1(i, n)          for (int i = 1; i < int(n); i++)
#define pb                  push_back
#define MOD                 1000000007 // 998244353
#define FIO                 ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(c) (c).begin(), (c).end()

void gray(string s, int n, bool forward)
{
    if (n == 0)
        cout << s << endl;
    else if (forward)
    {
        gray(s + '0', n - 1, true);
        gray(s + '1', n - 1, false);
    } else
    {
        gray(s + '1', n - 1, true);
        gray(s + '0', n - 1, false);
    }
}

int main()
{
    int n; cin >> n;
    string s;
    gray(s, n, true);
}
