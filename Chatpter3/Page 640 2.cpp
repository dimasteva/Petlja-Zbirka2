/*
Task: Value of a fully parenthesized min-max expression
Min-max expressions are formed using two infix operations:
• The operation m represents finding the minimum of two numbers;
• The operation M represents finding the maximum of two numbers.
Write a program that calculates the value of a given expression in which each operation is enclosed in parentheses (i.e., the expression is either a single digit or in the form (<expression> op <expression>)).

Input: A single line of standard input contains a valid fully parenthesized min-max expression.
Output: Output a digit representing the value of the given expression on the standard output.

Example
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

int main()
{
    FIO
    string s; cin >> s;
    stack<char> operators;
    stack<int> nums;
    forn(i, s.size())
    {
    	if (s[i] == ')')
    	{
    		int num2 = nums.top(); nums.pop();
    		int num1 = nums.top(); nums.pop();
    		char op = operators.top(); operators.pop();
    		if (op == 'm')
    			nums.push(min(num1, num2));
    		else
    			nums.push(max(num1, num2));
		}
		else if (isdigit(s[i]))
			nums.push(s[i] - '0');
		else if (s[i] == 'm' || s[i] == 'M')
			operators.push(s[i]);
	}
	cout << nums.top();
}
