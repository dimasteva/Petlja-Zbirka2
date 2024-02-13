/*
Task: Length of Compressed String
Compressed strings are constructed from small English alphabet letters and digits from 2 to 9. Each digit in the compressed string denotes that the substring before that digit is repeated as many times as the value of that digit. For example, the compressed string a2b3 represents the string aabaabaab (not aabbb), as the digit 2 after 'a' indicates that 'a' is repeated twice, so a2b represents the substring aab. The digit 3 after a2b indicates that the substring determined by the compressed form a2b, which is aab, is repeated three times. Write a program that determines the length of the string specified by a compressed form.

Input: The compressed string is read from standard input and has a length of less than 10^18.

Output: Print the length of the compressed string to standard output.

Example 1
Input
a2bb3c
Output
13

Example 2
Input
a2b32c
Output
19
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
    ll cnt = 0;
    forn(i, s.size())
    {
        if (isalpha(s[i]))
            cnt++;
        else
            cnt *= (s[i] - '0');
    }
    cout << cnt;
}
