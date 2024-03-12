/*
Task: Expression without parentheses
Write a program that calculates the value of an arithmetic expression in which natural numbers and the operators +, -, and * appear, but without parentheses. For example, 3+4*5-7*2.

Input: The only line of standard input contains the described expression.

Output: The standard output should contain only the requested value of the input expression.

Example:
Input
3+4*5-7*2
Output
9
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
    string s; cin >> s;
    int temp = 0;
    ll sum = 0;
    char op = '+';
    forn(i, s.size())
    {
        if (isdigit(s[i]))
        {
            int n = s[i] - '0';
            while(i + 1 < s.size() && isdigit(s[i + 1]))
            {
                n = n * 10 + s[i + 1] - '0';
                i++;
            }
            switch(op)
            {
                case '+':
                sum += temp;
                temp = n;
                break;

                case '-':
                sum += temp;
                temp = -n;
                break;

                case '*':
                temp *= n;
            }
        }
        else
        {
            op = s[i];
        }
        //cout << sum << " " << temp << endl;
    }
    sum += temp;
    cout << sum;
}
