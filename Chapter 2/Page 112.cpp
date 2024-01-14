/*
Task: Anagrams
Two words are anagrams if one can be obtained from the other by rearranging the order of the letters (for example, "grass" and "gras"). Write a program that, given a set of words, finds the maximum number of words that are mutual anagrams.

Input: The standard input begins with the number of words, n (0 ≤ n ≤ 50000), followed by n lines containing one word each from the initial set (all words consist only of lowercase English alphabet letters and have a maximum length of 200 characters).

Output: Print on the standard output the required size of the largest subset from the initial set of words, where all words are mutual anagrams.

Example:
Input
10
tommarvoloriddle
viviandarkbloom
iamlordvoldemort
danabnormal
normdanabal
vladimirnabokov
vladimirkoborov
bladvakvinomori
damonalbarn
dorianvivalkomb
Output
4
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define forn(i, n) for (int i = 0; i < int(n); i++)
#define forn1(i, n) for (int i = 1; i < int(n); i++)
#define all(c) (c).begin(), (c).end()
#define pb push_back
#define MOD 1000000007 // 998244353
#define FIO \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);

int main()
{
    FIO;
    int n;
    cin >> n;

    map<string, int> m;
    int mx = 0;

    forn(i, n)
    {
        string s;
        cin >> s;
        sort(all(s));
        m[s]++;
        if (m[s] > mx)
            mx = m[s];
    }

    cout << mx << endl;

    return 0;
}
