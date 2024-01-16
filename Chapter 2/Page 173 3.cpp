/*
Task: Repeating Substring
If s is a string, let s^n denote the string obtained by repeating each letter n times (e.g., (xyz)^3 is xxxyyyzzz). Write a program that determines the largest number n such that s^n is a substring of the given string t (this means that all letters of the string s^n appear in the string t, in the same order as in s^n, but not necessarily consecutively).

Input: The first line of the standard input contains the string s, and the second line contains the string t.

Output: Print the desired number n.

Example:
Input
xyz
xaxxybyxyxzyzzb
Output
3
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

bool found(string s, string t, int mid)
{
    int n = s.size(), m = t.size(), j = 0;
    for (int i = 0; i < m && j < n * mid; i++)
    {
        j += (t[i] == s[j / mid]);
    }
    return j == n * mid;
}

int main()
{
    FIO;
    string s, t;
    cin >> s >> t;
    int start = 0, end = t.size() / s.size() + 1;
    while(end - start > 1)
    {
        int mid = (end + start) / 2;
        if (found(s, t, mid))
            start = mid;
        else
            end = mid;
    }
    cout << start;
}
