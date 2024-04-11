/*
Task: All Parentheses Arrangements
Write a program that, for a given n, displays all correct arrangements of n pairs of parentheses in reverse lexicographic order. For example, for n = 3, the desired arrangements are ()()(), ()(()), (())(), (()()), and ((())).
Input: The first and only line of standard input contains a natural number n ≤ 13.
Output: Display the arrangements of n pairs of parentheses in reverse lexicographic order, each arrangement on a separate line of output.
Example
Input
4
Output
()()()()
()()(())
()(())()
()(()())
()((()))
(())()()
(())(())
(()())()
(()()())
(()(()))
((()))()
((())())
((()()))
(((())))
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

void rec(string& s, int n, int opened, int closed)
{
    if (closed == n)
    {
        cout << s << endl;
    }
    if (opened > closed)
    {
        s.pb(')');
        rec(s, n, opened, closed + 1);
        s.pop_back();
    }
    if (opened < n)
    {
        s.pb('(');
        rec(s, n, opened + 1, closed);
        s.pop_back();
    }
}

int main()
{
    int n; cin >> n;
    string s = "";
    rec(s, n, 0, 0);
}
