/*
Task: Pangrams
Pangrams are words that contain at least one occurrence of each letter in the alphabet (letters can appear more than once). A famous pangram in the English language is "the quick brown fox jumps over a lazy dog." Write a program that checks whether there is a substring (a consecutive sequence of characters) in the given text of length k that is a pangram.

Input: The first line of standard input contains a string composed only of lowercase letters of the English alphabet, with a length of up to 105 characters. The next line contains a natural number k (1 ≤ k ≤ 105).

Output: Print "da" to standard output if there exists a pangram of length k in the entered text, or "ne" otherwise.

Example 1
Input
xxxabcdefghijklmnopqrstuvwxyzxxx
26
Output
da

Example 2
Input
xxxabcdefghijklmxxxnopqrstuvwxyzxxx
28
Output
ne

Example 3
Input
xxxabcdefghijklmxxxnopqrstuvwxyzxxx
29
Output
da
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

int main() {
    FIO;
    string s; cin >> s;
    int k; cin >> k;
    map <char, int> m;
    forn(i, k)
        m[s[i]]++;
    if (m.size() == 26)
    {cout << "da"; return 0;}
    
    for (int i = k; i < s.size(); i++)
    {
        m[s[i - k]]--;
        m[s[i]]++;
        if(m[s[i - k]] == 0)
            m.erase(s[i - k]);
        if (m.size() == 26)
        {cout << "da"; return 0;}
    }
    cout << "ne";
}
