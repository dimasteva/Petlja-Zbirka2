/*
Task: Division into palindromic substrings
Write a program that determines all the ways to divide a string into consecutive non-empty substrings that are palindromes (read the same from left to right and right to left).

Input: The input is read from the standard input and consists of a string containing at most 50 characters of the English alphabet.

Output: Print all the required divisions of the string into palindromic substrings to the standard output (substrings should be written on the same line, separated by a single space). If there are multiple solutions, print the one that starts with shorter substrings first.

Example
Input
sirimamiris
Output
s i r i m a m i r i s
s i r i m a m iri s
s i r i mam i r i s
s i r i mam iri s
s i r imami r i s
s i rimamir i s
s iri m a m i r i s
s iri m a m iri s
s iri mam i r i s
s iri mam iri s
s irimamiri s
sirimamiris
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define forn(i, n)          for (int i = 0; i < int(n); i++)
#define forn1(i, n)          for (int i = 1; i < int(n); i++)
#define pb                  push_back
#define MOD                 1000000007 // 998244353
#define FIO                 ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(c) (c).begin(), (c).end()

bool isPalindrome(const string& s, int from, int to) {
    for (int i = from, j = to; i < j; i++, j--)
        if (s[i] != s[j])
            return false;
    return true;
}

void splitIntoPalindromes(string& s, int index, vector<string>& p)
{
    if (index == s.size())
    {
        for (const string& palindrome : p)
            cout << palindrome << " ";
        cout << endl;
    } else
    {
        for (int j = index; j < s.size(); j++)
        {
            if (isPalindrome(s, index, j))
            {
                p.pb(s.substr(index, j - index + 1));
                splitIntoPalindromes(s, j + 1, p);
                p.pop_back();
            }
        }
    }
}

int main() {
    string s;
    cin >> s;
    vector<string> p;
    splitIntoPalindromes(s, 0, p);
    return 0;
}
