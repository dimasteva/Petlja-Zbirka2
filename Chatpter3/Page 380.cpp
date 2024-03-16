/*
Task: Next Binary String Without Adjacent Ones

Consider lexicographically ordered binary strings of length n that contain zeros and ones but do not contain two consecutive ones. For example, such strings of length 3 are 000, 001, 010, 100, and 101. Write a program that, given a string, determines the next string in lexicographical order.

Input: Read from the standard input a binary string without consecutive ones of length n (1 ≤ n ≤ 50). All elements are concatenated one after the other without spaces.

Output: The only line of the standard output should contain the elements of the next string in lexicographical order (printed one after the other without spaces), or the text "ne postoji" if the input string is lexicographically the largest.

Example 1
Input
10101000100001010
Output
10101000100010000

Example 2
Input
10101010
Output
ne postoji
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
    string s; cin >> s;
    int n = s.size();
    int i = n - 1;
    while((i >= 0 && s[i] == '1') || (i > 0 && s[i - 1] == '1'))
        s[i--] = '0';
    if (i < 0)
        {cout << "ne postoji"; return 0;}
    s[i] = '1';
    cout << s;
}
