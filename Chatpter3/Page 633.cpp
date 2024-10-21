/*
Task: Bracket Matching
The expression contains the following types of brackets: (, ), {, }, [, and ]. Write a program that checks if the brackets in the given expression are correctly matched.

Input: An expression is entered from standard input (all in one line, without spaces).

Output: Print "da" if the brackets are correctly matched, and "ne" if they are not.

Example 1
Input
[3*(2+4)]*5

Output
da

Example 2
Input
{3*(2+4)}[5+7)+(45)

Output
ne
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
    string s; 
    cin >> s;
    stack<char> st;

    for (char c : s) {
        if (c == '(' || c == '[' || c == '{') {
            st.push(c);
        } else if (c == ')' || c == ']' || c == '}') {
            if (st.empty()) {
                cout << "ne";
                return 0;
            }
            char top = st.top();
            st.pop();
            if ((c == ')' && top != '(') || 
                (c == ']' && top != '[') || 
                (c == '}' && top != '{')) {
                cout << "ne";
                return 0;
            }
        }
    }
    if (st.empty())
        cout << "da";
    else
        cout << "ne";
}
