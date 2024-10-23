/*
Task: Converting a fully parenthesized expression to postfix form  
Write a program that converts a valid infix arithmetic expression with parentheses around each application of a binary operator into postfix form. For simplicity, assume that all operands are single-digit numbers and that only addition and multiplication operations are used.  
Input: A single line of standard input contains a valid, fully parenthesized expression.  
Output: Print the desired postfix form to standard output.  
Example  
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

int main()
{
    FIO
    string s; cin >> s;
    stack<char> operators;
    forn(i, s.size())
    {
    	if (s[i] == ')')
    	{
    		cout << operators.top();
    		operators.pop();
		} else if (isdigit(s[i]))
			cout << s[i];
		else if (s[i] == '*' || s[i] == '+')
			operators.push(s[i]);
	}
}
