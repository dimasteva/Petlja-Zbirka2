/*
Task: Value of a fully bracketed min-max expression

Min-max expressions are built using two infix operations:
- The operation m denotes finding the minimum of two numbers.
- The operation M denotes finding the maximum of two numbers.

Write a program that calculates the value of a given expression in which each application of an operation is enclosed in parentheses (i.e., the expression is either a single digit or in the form (<expression> op <expression>)).

Input: The only line of standard input contains a valid fully bracketed min-max expression.

Output: Print to the standard output a digit representing the value of the input expression.

Example:
Input
((3m5)M(4m(2M6)))
Output
4
Explanation
((3m5)M(4m(2M6))) = (3M(4m6)) = (3M4) = 4
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

int solve(string &s, int &i)
{
    if (s[i] == '(')
    {
        i++;
        int left = solve(s, i);
        char op = s[i++];
        int right = solve(s, i);
        i++;
        return (op == 'M'? max(left, right) : min(left, right));
    } else
        return s[i++] - '0';
}

int main()
{
    string s; cin >> s;
    int i = 0;
    cout << solve(s, i);
}
