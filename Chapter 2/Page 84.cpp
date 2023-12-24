/*
Task: Sorting Lines
Write a program that sorts lines read from the standard input lexicographically, in alphabetical order, without distinguishing between uppercase and lowercase letters.

Input: Lines are read from the standard input until the end of input is reached (in interactive input, the end of input can be achieved with the keystrokes ctrl + Z or ctrl + D).

Output: Display the sorted input lines on the standard output.

Example:
Input
Pera
ananas
Mika
pertla
Output
ananas
Mika
Pera
pertla
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

bool Compare(const string &a, const string &b)
{
    string a_lower = a;
    string b_lower = b;
    
    transform(all(a), a_lower.begin(), [](unsigned char c){ return tolower(c); });
    transform(all(b), b_lower.begin(), [](unsigned char c){ return tolower(c); });
    
    return a_lower < b_lower;
}

int main()
{
    string line;
    vector <string> v;
    while (std::getline(std::cin, line))
        v.pb(line);
    
    sort(all(v), Compare);
    for (string c : v)
        cout << c << endl;
}
