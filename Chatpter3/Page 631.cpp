/*
Task: Lines in Reverse Order
Write a program that prints all the lines read from standard input in reverse order from the order in which they were entered.

Input: Lines of text are read from standard input until the end of input.

Output: Print the input lines to standard output in reverse order.

Example
Input
zdravo
svete
dobar
dan

Output
dan
dobar
svete
zdravo
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
	stack<string> st;
	string s;
	while(cin >> s)
	{
		st.push(s);
	}
	while(!st.empty())
	{
		cout << st.top() << endl;
		st.pop();
	}
}
