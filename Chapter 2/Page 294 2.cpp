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


int minLectures(vector<int>& lectures, int m) {
    unordered_map<int, int> lastPos;
    int start = 0, end = 0, minLen = lectures.size() + 1;
    for (int i = 0; i < lectures.size(); ++i) {
        lastPos[lectures[i]] = i;
        if (lastPos.size() == m) {
            while (lastPos[lectures[start]] != start) {
                ++start;
            }
            if (i - start + 1 < minLen) {
                minLen = i - start + 1;
                end = i;
            }
        }
    }
    return lastPos.size() == m ? minLen : -1;
}

int main() {
    int m, n;
    cin >> m >> n;
    vector<int> lectures(n);
    for (int i = 0; i < n; ++i) {
        cin >> lectures[i];
    }
    int result = minLectures(lectures, m);
    if (result == -1) {
        cout << "ne moze" << endl;
    } else {
        cout << result << endl;
    }
    return 0;
}
