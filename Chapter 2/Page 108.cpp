/*
Task: Anagram
Given two strings composed of lowercase English alphabet letters, punctuation marks, and spaces, write a program that checks whether the two given strings are anagrams. In other words, check if one string can be obtained by rearranging the letters of the other string, and vice versa (characters that are not letters are ignored).

Input: The first line of the standard input contains one string, and the second line contains another string.

Output: Print "da" on the standard output in a single line if the given strings represent anagrams; otherwise, print "ne".

Example 1:
Input
panta redovno zakasni
neopravdan izostanak
Output
da

Example 2:
Input
oni su skrsili vagu
suvisni kilogrami
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
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    int a[26] = {0};
    int b[26] = {0};

    forn(i, s1.size())
    {
        a[s1[i] - 97]++;
    }
    forn(i, s2.size())
    {
        b[s2[i] - 97]++;
    }
    forn(i, 26)
    {
        if (a[i] != b[i])
            {cout << "ne" << endl; return 0;}
    }
    cout << "da" << endl;
}
