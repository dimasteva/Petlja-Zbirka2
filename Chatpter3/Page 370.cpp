/*
Task: All words from the given words
A string s is given as a set of lowercase English alphabet letters (the letters in the string are arranged in ascending order), and a natural number k. Write a program that displays in lexicographic order all words of length k that can be formed from the given set.

Input: The standard input consists of two lines. The first line contains a string s of length at most 10, and the second line contains a natural number k (k ≤ 6, k ≤ n).

Output: Display the requested words in lexicographic order on the standard output, each word on a separate line.

Example:
Input
amx
2
Output
aa
am
ax
ma
mm
mx
xa
xm
xx
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

void generate(vector <int> &a, const string &s, int k)
{
    if (a.size() == k)
    {
        for (int &x : a)
            cout << s[x];
        cout << endl;
    } else
    {
        forn(i, s.size())
        {
            a.pb(i);
            generate(a, s, k);
            a.pop_back();
        }
    }
    
}

int main() {
    string s; cin >> s;
    int k; cin >> k;
    vector <int> a;
    generate(a, s, k);
}
