/*
Task: Permutated Substrings
Given two strings, s and x, composed exclusively of decimal digits, write a program to determine the number of substrings (consecutive characters) of string s from which the string x can be formed using each digit exactly once.

Input: The first line of standard input contains the string s, and the second line contains the string x.

Output: Display on a single line of standard output the requested number of ways.

Example
Input
5242245422
242
Output
4
Explanation: The string 242 can be formed by taking 3 consecutive digits from the string 5242245422 in the order of positions 1, 2, 3, and 7.
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
    FIO;
    string s; cin >> s;
    string x; cin >> x;
    int a[10] = {0};
    for (char c : x)
        a[c - '0']++;
    int cnt = 0;
    int b[10] = {0};
    for(int i = 0; i < x.size(); i++)
        b[s[i] - '0']++;
    for (int i = 0, j = x.size() - 1; j < s.size(); j++, i++)
    {
        bool ok = true;
        forn(k, 10)
            if (a[k] != b[k]) {ok = false; break;}
        cnt += ok;
        b[s[i] - '0']--;
        if(j + 1 < s.size())
            b[s[j + 1] - '0']++;
    }
    cout << cnt << endl;
}
