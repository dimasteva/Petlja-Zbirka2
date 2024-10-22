/*
Task: Value of a postfix expression  
Postfix notation is sometimes called Polish notation, and postfix notation is sometimes referred to as reverse Polish notation (RPN) in honor of the logician Jan Łukasiewicz who invented it. It implies that binary operators are written after their operands instead of between them. For example, instead of writing \(3 + 5\), we write \(3\ 5 +\). Write a program that determines the value of a postfix expression.  
Input: The standard input reads a postfix expression containing single-digit numbers and the operators + and * (without spaces).  
Output: Print the value of the input expression to standard output.  
Example 1  
Input  
12+3*  
Output  
9  
Explanation  
The postfix expression is \((1 + 2) * 3\).  
Example 2  
Input  
11+2*345+*+  
Output  
31  
Explanation  
The postfix expression is \((1 + 1) * 2 + 3 * (4 + 5)\).  
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
    FIO;
    string s; cin >> s;
    stack<int> st;
    forn(i, s.size())
    {
    	if (isdigit(s[i]))
    	{
    		st.push(s[i]-'0');
		} else
		{
			int second = st.top();
			st.pop();
			int first = st.top();
			st.pop();
			if (s[i] == '+')
				st.push(first + second);
			else if (s[i] == '-')
				st.push(first - second);
			else if (s[i] == '*')
				st.push(first * second);
			else
				st.push(first / second);
		}
	}
	cout << st.top();
}
