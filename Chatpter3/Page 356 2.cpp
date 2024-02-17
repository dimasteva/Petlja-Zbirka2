/*
Task: Converting Fully Parenthesized Expression to Postfix Form
Write a program that converts a valid, fully parenthesized infix arithmetic expression, where binary operators are enclosed in parentheses, into postfix form. For simplicity, assume that all operands are single-digit numbers, and only addition and multiplication operations are present.

Input: The only line of standard input contains a valid, fully parenthesized expression.

Output: Print to standard output the corresponding postfix form.

Example:
Input
(((3*5)+(7+(2*1)))*4)
Output
35*721*++4*
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

void con(const string& s, int& i, string& post)
{
    if (isdigit(s[i]))
        post += s[i++];
    else
    {
        i++;
        con(s, i, post);

        char op = s[i++];

        con(s, i, post);

        i++;

        post += op;
    }
}

string con(const string& s)
{
    string res = "";
    int i = 0;
    con(s, i, res);
    return res;
}

int main()
{
    string s; cin >> s;
    string post = con(s);
    cout << post << endl;
}
