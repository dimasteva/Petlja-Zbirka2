/*
Task: Shortest Substring Containing All Given Characters

A graphic designer has rearranged several letters in a font and wants to present the changes to the client. In a long text, the designer needs to select the shortest segment (substring of consecutive letters) that contains all the letters they have modified.

Input: The first line of the standard input contains the text (assume it consists only of lowercase English alphabet letters) with a length of at most 50000 characters. The second line contains a set of letters (again, assume lowercase English alphabet letters) that the designer has modified (letters are written consecutively, without spaces, and without repetition).

Output: Print an integer representing the length of the shortest part of the text that contains all the characters in the given set. If such a part does not exist, print "nema."

Example 1:
Input
dobardansvimakakoste
arnk
Output
10

Example 2:
Input
ababababab
abc
Output
nema
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

bool found(string s, string d, int mid)
{
    int letters[26] = {0};
    for (char c : d)
        letters[c - 'a']++;
    for (int i = 0; i < s.size(); i++)
    {
        letters[s[i] - 'a']--;
        if (i >= mid)
            letters[s[i - mid] - 'a']++;
        if (i >= mid - 1)
        {
            bool ok = true;
            for (int j = 0; j < 26; j++)
                if (letters[j] > 0)
                    ok = false;
            if (ok)
                return true;
        }
    }
    return false;
}

int main()
{
    string s; cin >> s;
    string d; cin >> d;
    int start = 0, end = s.size();
    int mn = INT_MAX;
    while(start <= end)
    {
        int mid = start + (end - start) / 2;
        if (found(s, d, mid))
            {end = mid - 1; mn = min(mn, mid);}
        else
            start = mid + 1;
    }
    if (mn != INT_MAX)
        cout << mn;
    else
        cout << "nema";
}
