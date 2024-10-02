/*
Task: Word by word through letter deletion

Two words written in lowercase letters are given. Write a program to check whether the second word can be obtained by deleting letters (not necessarily consecutive) from the first word.

Input: The first line of the standard input contains the first word, and the second line contains the second word.

Output: On the first line of the standard output, print "da" if the second word can be obtained by deleting some letters from the first word, otherwise print "ne."

Example 1

Input
anica
ana

Output
da

Example 2

Input
anica
cana

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
#define MOD 1000000007
#define FIO                \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int j = 0;
    for (int i = 0; i < s1.size() && j < s2.size(); i++)
    {
    	if (s1[i] == s2[j])
    		j++;
	}
	if (j == s2.size())
		cout << "da";
	else
		cout << "ne";
}
