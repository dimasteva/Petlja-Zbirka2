/*
Task: Letter in Compressed String Form
Compressed strings are constructed from small English alphabet letters and digits from 2 to 9. Each digit in the compressed string denotes that the substring before that digit is repeated as many times as the value of that digit. For example, the compressed form a2b3 represents the string aabaabaab (not aabbb), as the digit 2 after 'a' indicates that 'a' is repeated twice, so a2b represents the substring aab. The digit 3 after a2b indicates that the substring determined by the compressed form a2b, which is aab, is repeated three times. Write a program that determines the element at position k within the string specified by a compressed form.

Input: Read from standard input the compressed form of the string, which has a length of less than 10^18, followed by the number k, which is greater than or equal to 0 and strictly less than the length of the string.

Output: Print the requested letter to standard output.

Example 1
Input
zdravo2svima3
30
Output
v

Example 2
Input
a2b3ca3d2f
40
Output
a
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

const string digits = "0123456789";

vector<pair<string, int>> split(const string& s) {
    vector<pair<string, int>> result;
    size_t pp = 0, p = s.find_first_of(digits);

    while (p != string::npos) {
        result.emplace_back(s.substr(pp, p - pp), s[p] - '0');
        pp = p + 1;
        p = s.find_first_of(digits, p + 1);
    }

    if (pp < s.length())
        result.emplace_back(s.substr(pp), 1);

    return result;
}

char kToLetter(const string& s, ll k) {
    auto parts = split(s);
    vector<ll> lengths(parts.size());
    lengths[0] = parts[0].first.length();

    for (int i = 1; i < parts.size(); i++)
        lengths[i] = lengths[i-1] * parts[i-1].second + parts[i].first.length();

    for (int i = parts.size() - 1; i >= 0; i--) {
        if (k >= lengths[i] * parts[i].second)
            return parts[i+1].first[k - lengths[i]*parts[i].second];
        k %= lengths[i];
    }

    return parts[0].first[k];
}

int main() {
    FIO

    string s;
    cin >> s;
    ll k;
    cin >> k;

    cout << kToLetter(s, k) << endl;

    return 0;
}
