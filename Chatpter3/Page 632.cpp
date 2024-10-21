/*
Task: Web Browsing
A web browser remembers the history of visited websites, and the user has the option to go back to previously visited sites. Write a program that simulates the browser's history by reading the addresses of visited websites (each on a separate line). When a line containing "back" is read, the browser goes back to the last visited page. If the "back" command takes the user to the initial page, output "-". If the "back" command is issued on the initial page, the user remains on the initial page. The program should print all the websites visited by the user.

Input: Website addresses are read from standard input, each on a separate line.

Output: Print the websites visited in the order they are visited.

Example
Input
http://www.google.com
http://www.rts.rs
back
http://www.petlja.org
http://www.matf.bg.ac.rs
back
back
back
back

Output
http://www.google.com
http://www.rts.rs
http://www.google.com
http://www.petlja.org
http://www.matf.bg.ac.rs
http://www.petlja.org
http://www.google.com
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
		if (s == "back")
		{
			if (st.empty())
				cout << "-" << endl;
			else
			{
				st.pop();
				if (st.empty())
					cout << "-" << endl;
				else
					cout << st.top() << endl;
			}
		} else
		{
			cout << s << endl;
			st.push(s);
		}
			
	}
}
